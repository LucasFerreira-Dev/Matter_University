# IMC = peso / (altura x altura)

name = input("Digite qual é o seu nome: ")
weight = float(input("Digite o seu peso: "))
height = float(input("Digite a sua altura: "))

calculation = weight / (height * height)

print(f'Oi {name}\nSua altura é: {height}\nSeu peso é: {weight}\nSeu IMC é: {calculation:.2f}')