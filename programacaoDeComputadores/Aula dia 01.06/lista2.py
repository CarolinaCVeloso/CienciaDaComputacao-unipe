notas = []
count = 0

for i in range (10):
    notas.append(int(input("Digite uma nota: ")))
    if notas[i] >= 7 and notas[i] <= 10:
        count += 1
print(count)