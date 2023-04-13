count = 0
var = 0

while count <=9:
    idade = int(input("Digite a idade: "))
    var = var + idade
    count += 1

media = var / 10
print("A média das idades é", media)