import express from "express"; //framework para criar api
import { Request, Response} from "express";

const app = express();
const port: number = 3000;

app.use(express.json());

const users = [
    {id: 1, nome: "Ana", idade: 30},
    {id: 2, nome: "João", idade: 20}
];

// ENDPOINTS
app.get("/users", (req, res) => {
    res.json(users);
});

//findOne
app.get("/users/:id", (req, res) =>{
    const idProcurado = Number(req.params.id);
    console.log(idProcurado);
    const usuarioEncontrado = users.find(user => user.id === idProcurado);

    
    console.log(usuarioEncontrado);

    if (usuarioEncontrado) {
        res.json(usuarioEncontrado);
    } else {
        res.status(404).json({mensagem: "Usuário não encontrado"});
    }
});

app.post("/users", (req: Request, res: Response) => {
    const { nome, idade } = req.body;

    if (!nome || !idade) {
        return res.status(400).json({ mensagem: "Nome e idade são obrigatórios" });
    }

    // Gera o próximo ID baseado no último do array
    const newId = users.length > 0 ? users[users.length - 1].id + 1 : 1;

    const newUser = { id: newId, nome, idade };
    users.push(newUser);

    res.status(201).json(newUser);
});


app.put("/users/:id", (req, res) => {
    const id = Number(req.params.id);
    const  { nome, idade } = req.body;

    const userIndex = users.findIndex( u => u.id === id);

    if(userIndex >= 0) {
        users[userIndex] = { id, nome, idade};
        res.json(users[userIndex]);
    } else {
        res.status(404).json({ mensagem: "Usuário não encontrado"});
    }
});

app.delete("/users/:id", (req, res) => {
    const id = Number(req.params.id);
    const userIndex = users.findIndex(u => u.id === id);

    if(userIndex >= 0){
        const removeUser = users.splice(userIndex, 1)[0];
        res.json({ mensagem: "Usuário removido", usuario: removeUser });
    } else {
        res.status(404).json({ mensagem: "Usuário não encontrado"});
    }
});

app.listen(port, () => {
    console.log(`A api subiu na porta ${port}`);
});

