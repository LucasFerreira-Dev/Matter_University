import json
import os

# Nome do arquivo JSON
arquivo_json = "produtos.json"

# Verifica se já existe um arquivo JSON e carrega os produtos antigos
if os.path.exists(arquivo_json):
    with open(arquivo_json, "r", encoding="utf-8") as arquivo:
        produtos = json.load(arquivo)  # Carrega a lista de produtos já existente
else:
    produtos = []  # Se não existir, cria uma lista vazia

# Entrada de dados
print("Bem-vindo!")
nome = input("Digite o nome do produto: ")
preco = float(input("Digite o preço do produto: "))
quantidade = int(input("Digite a quantidade de compra: "))

# Criando dicionário do produto
produto = {
    "Nome": nome,
    "Preço": preco,
    "Quantidade": quantidade
}

# Adiciona o novo produto à lista
produtos.append(produto)

# Salva a lista de produtos no arquivo JSON
with open(arquivo_json, "w", encoding="utf-8") as arquivo:
    json.dump(produtos, arquivo, indent=4)

# Controle
input("Aperte ENTER para continuar...")
os.system("cls")  # Limpa o terminal

# Ler o JSON e exibir os produtos
with open(arquivo_json, "r", encoding="utf-8") as arquivo:
    carregar = json.load(arquivo)

# Exibir os produtos de forma organizada
print("\n📦 Lista de Produtos Salvos:")
for i, produto in enumerate(carregar, start=1):
    print(f"{i}. Nome: {produto['Nome']} | Preço: R${produto['Preço']:.2f} | Quantidade: {produto['Quantidade']}")

print("\n✅ Todos os produtos foram salvos e exibidos com sucesso!")