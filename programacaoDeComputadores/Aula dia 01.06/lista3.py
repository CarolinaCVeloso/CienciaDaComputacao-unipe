idades = []
count = 0
somaid = 0
media = 0

for i in range (10):
    idades.append(int(input("Digite uma idade: ")))
    somaid = somaid + idades[i]
    media = somaid/10

    if idades[i] >= 30:
        count += 1

print("A média das idades é", media)
print("A quantidade de idades maiores que 30 é:", count)