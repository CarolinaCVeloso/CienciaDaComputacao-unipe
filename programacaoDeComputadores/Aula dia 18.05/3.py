quantidade = int(input("Digite aqui a quantidade de números qeu você desejar inserir nesse algoritmo:"))

soma=0
npositivos = 0
nnegativos = 0

for i in range(1, quantidade +1):
    num=float(input("Digite aqui um número:"))
    soma += num
    if num > 0:
        npositivos += 1
    elif num < 0:
        nnegativos += 1
porcpositivos = (npositivos/quantidade)*100
porcnegativos = (nnegativos/quantidade)*100
media = soma/quantidade
print("A quantidade de números postivos é:", npositivos, "a quantidade de números negativos é", nnegativos, "a porcentagem de números positivos é", porcpositivos, "a porcentagem de números negativos é", porcnegativos, ". A média aritimética de todos os números é", media)
