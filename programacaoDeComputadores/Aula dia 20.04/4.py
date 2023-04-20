codigo = int(input('Digite um código de 1 a 4: '))
valor = 0

while codigo != 0:
    if codigo == 1:
        print('Caderno - R$ 12,00')
        valor += 12.0
    elif codigo == 2:
        print('Régua - R$ 2,50')
        valor += 2.5
    elif codigo == 3:
        print('Borracha - R$ 0,25')
        valor += 0.25
    elif codigo == 4:
        print('Mochila - R$ 50,00')
        valor += 50.0
    else:
        print('Código inválido!')
    codigo = int(input('Digite um código de 1 a 4 ou 0 para finalizar a compra: '))

print('O valor total é: ', valor)