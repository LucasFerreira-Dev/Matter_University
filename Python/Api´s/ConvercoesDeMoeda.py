import os #limpa cmd
import requests

os.system("cls") #limpar cmd

requisicao = requests.get("https://economia.awesomeapi.com.br/last/USD-BRL,EUR-BRL,BTC-BRL")

#testes
print(requisicao) #se de 200 tudo ok
print(requisicao.json()) #puchar a cotação atual

test = input("Aperte para continuar: ") #ver test
os.system("cls") #limpar cmd

#cria dicionario
dic_requisicao = requisicao.json()

#exemplo
resultado = float(dic_requisicao['USDBRL']['bid'])
print(f'Cotação do dolar hoje: {round(resultado, 2)}')  # Duas casas decimais