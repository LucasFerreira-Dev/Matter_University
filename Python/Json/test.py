import json

nome = input("Digite: ")

dados = {
    "Nome": nome
}

# Convertendo para JSON
json_convertido = json.dumps(dados, indent=4)

print(json_convertido)