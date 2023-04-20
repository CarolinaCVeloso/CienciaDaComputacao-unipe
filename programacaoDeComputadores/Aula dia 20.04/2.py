idade = int(input('Digite a idade: '))
faixa1 = 0
faixa2 = 0

while idade >= 0:
    if idade <= 15:
        faixa1 += 1
    else:
        faixa2 += 1
    idade = int(input('Digite a idade: '))

print('idades na faixa etária 1:', faixa1) 
print('idades na faixa etária 2:', faixa2)
