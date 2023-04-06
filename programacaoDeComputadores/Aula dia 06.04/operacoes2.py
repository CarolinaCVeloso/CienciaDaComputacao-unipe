num1 = int(input('Digite o primeiro número '))
num2 = int(input('Digite o segundo número '))
opcoes = int(input('Digite uma das opções: 1 ou 2 - Informar o maior número, 3 ou 4 - Informar o menor número: '))

if opcoes == 1 or opcoes == 2:
    if num1 > num2:
        print('O maior número é: ', num1)
    elif num2 > num1: 
        print('O maior número é: ', num2) 
    else:
        print('Os números são iguais')
elif opcoes == 3 or opcoes == 4:
    if num1 < num2:
        print('O menor número é: ', num1)
    elif num2 < num1: 
        print('O menor número é: ', num2) 
    else:
        print('Os números são iguais')
else:
    print('Erro, escolha uma opção de 1 a 4')