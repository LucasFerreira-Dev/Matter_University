import Express from "express";
import { Request, Response } from "express";

const app = Express();
const port: number = 3000;

app.use(Express.json());

const medicos = [
    {id: 1, crm: "123456", nome: "Lucas", especialidade: "Cardiologista"}
];

app.listen(port, () => {
    console.log(`A api subiu na porta ${port}`);
});

app.get("/medicos", (req, res) => {
    res.json(medicos);
});

app.get("/medicos/procurar/id/:id", (req, res) => {
    const idProcurado = Number (req.params.id);
    const medicoEncontrado = medicos.find(medico => medico.id == idProcurado);

    if(medicoEncontrado){
        res.json(medicoEncontrado);
    } else {
        res.status(404).json({mensagem: "Médico não encontrado"});
    }
});

app.get("/medicos/procurar/crm/:crm", (req, res) => {
    const crmProcurado = String (req.params.crm);
    const medicoEncontrado = medicos.find(medico => medico.crm == crmProcurado);

    if(medicoEncontrado){
        res.json(medicoEncontrado);
    } else {
        res.status(404).json({mensagem: "Médico não encontrado"});
    }
});

app.post("/medicos/criar", (req: Request, res: Response) => {
    const { crm, nome, especialidade } = req.body;
    if(!crm || !nome || !especialidade){
        return res.status(400).json({mensagem: "CRM, nome, especialidade são obrigatorios"});
    }

    const newId = medicos.length > 0 ? medicos[medicos.length - 1].id + 1 : 1;
    const newMedico = { id: newId, crm, nome, especialidade };
    medicos.push(newMedico);

    res.status(201).json(newMedico);
});

app.put("/medicos/atualizar/id/:id", (req: Request, res: Response) => {
    const id = Number(req.params.id);
    const  { crm, nome, especialidade} = req.body;

    const userIndex = medicos.findIndex( u => u.id === id);

    if (!crm || !nome || !especialidade) {
        return res.status(400).json({ mensagem: "Todos os campos são obrigatórios para atualização" });
    } else if(userIndex >= 0) {
        medicos[userIndex] = { id, crm, nome, especialidade};
        res.json(medicos[userIndex]);
    } else {
        res.status(404).json({ mensagem: "Médico não encontrado"});
    }
});

app.put("/medicos/atualizar/crm/:crm", (req: Request, res: Response) => {
    const crm = req.params.crm;
    const { nome, especialidade } = req.body;

    const userIndex = medicos.findIndex(u => u.crm === crm);

    if (!nome || !especialidade) {
        return res.status(400).json({ mensagem: "Nome e especialidade são obrigatórios para atualização" });
    }

    if (userIndex >= 0) {
        const medicoAtual = medicos[userIndex];
        medicos[userIndex] = { id: medicoAtual.id, crm: medicoAtual.crm, nome, especialidade };
        return res.json(medicos[userIndex]);
    } else {
        return res.status(404).json({ mensagem: "Médico não encontrado" });
    }
});

app.delete("/medicos/deletar/id/:id", (req, res) => {
    const id = Number(req.params.id);
    const userIndex = medicos.findIndex(u => u.id === id);

    if(userIndex >= 0){
        const removeUser = medicos.splice(userIndex, 1)[0];
        res.json({ mensagem: "Médico removido", usuario: removeUser });
    } else {
        res.status(404).json({ mensagem: "Médico não encontrado"});
    }
});

app.delete("/medicos/deletar/crm/:crm", (req, res) => {
    const crm = String(req.params.crm);
    const userIndex = medicos.findIndex(u => u.crm === crm);

    if(userIndex >= 0){
        const removeUser = medicos.splice(userIndex, 1)[0];
        res.json({ mensagem: "Médico removido", usuario: removeUser });
    } else {
        res.status(404).json({ mensagem: "Médico não encontrado"});
    }
});