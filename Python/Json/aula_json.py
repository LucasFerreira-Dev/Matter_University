import json
import os

#entrada de dados
print("Bem vindo")
nome = input("Digite seu nome: ")
preco = float(input("Digite o preço do produto: "))
quantidade = int(input("Digite a quantidade de compra: "))

#dicionario
loja = {
    "Nome": nome,
    "Preço": preco,
    "Quantidade": quantidade
}

#Criar o arquivo json
with open("Loja.json", "w", encoding="utf-8") as arquivo:
    json.dump(loja, arquivo, indent=4)

#controle
apagar = input("Aperte enter para continuar")
os.system("cls") #limpar cmd

#ler json
with open("Loja.json", "r", encoding="utf-8") as arquivo:
    carregar = json.load(arquivo)

print(carregar)#mostrar o que ele tem