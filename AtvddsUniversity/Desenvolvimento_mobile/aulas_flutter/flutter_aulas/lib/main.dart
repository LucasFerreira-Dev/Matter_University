import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(home: Tela()));
}

class Tela extends StatefulWidget {
  @override
  _TelaState createState() => _TelaState();
}

class _TelaState extends State<Tela> {
  TextEditingController qtdController = TextEditingController();
  String resultado = "";

  void processar() {
    resultado = "";

    int qtd = int.parse(qtdController.text);
    int aprovados = 0;
    int recuperacao = 0;
    int reprovados = 0;

    for (int i = 0; i < qtd; i++) {
      String nome = "Aluno $i";
      double valorI = i.toDouble();
      double n1 = 3 + valorI;
      double n2 = 4 + valorI;
      double n3 = 5 + valorI;
      double media = (n1 + n2 + n3) / 3;

      if (media >= 7) {
        aprovados++;
      } else if (media >= 5) {
        recuperacao++;
      } else {
        reprovados++;
      }

      resultado += "$nome - Média: ${media.toStringAsFixed(2)}\n";
    }

    resultado += "\nAprovados: $aprovados\n";
    resultado += "Recuperação: $recuperacao\n";
    resultado += "Reprovados: $reprovados\n";

    setState(() {});
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(title: Text("Sistema Escolar")),
      body: Column(
        children: [
          TextField(
            controller: qtdController,
            decoration: InputDecoration(labelText: "Quantidade de alunos"),
          ),

          ElevatedButton(onPressed: processar, child: Text("Calcular")),

          Text(resultado),
        ],
      ),
    );
  }
}
