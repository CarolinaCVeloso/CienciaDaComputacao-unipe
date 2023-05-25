notas = []

notas.append(float(input("Digite a nota do primeiro aluno: ")))
notas.append(float(input("Digite a nota do segundo aluno: ")))
notas.append(float(input("Digite a nota do terceiro aluno: ")))

print(notas)

media = (notas[0] + notas[1] + notas[2])/len(notas)
print(media)