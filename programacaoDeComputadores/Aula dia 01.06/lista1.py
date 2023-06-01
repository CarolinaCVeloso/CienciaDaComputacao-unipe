notas = [10, 7, 9, 5, 3, 8, 9, 5, 3, 2]
notasboas = 0

for i in range(10):
    if notas[i] >= 7 and notas[i]<= 10:
        notasboas += 1

print(notasboas)