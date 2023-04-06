num1 = int(input('Digite o primeiro número: '))
num2 = int(input('Digite o segundo número: ')) 
opcoes = int(input('Digite a operação desejada: 1 - Média entre os números digitados, 2 - Diferença do maior pelo menor, 3- Produto entre os números digitados, 4- Divisão do primeiro pelo segundo: '))

if opcoes == 1:
    print('A média entre os números é ', (num1+num2)/2 )
elif opcoes == 2:
    if num1 > num2:
        print('A diferença do maior pelo menor é ', num1-num2)
    elif num2 > num1:
        print('A diferença do maior pelo menor é', num2-num1)
    else: 
        print('Os números são iguais, por isso a diferença entre eles é zero')
elif opcoes == 3:
    print('O produto entre os números digitados é ', num1*num2)
elif opcoes == 4:
    print('A divisão do primeiro pelo segundo é ', num1/num2)
else:
    print('Erro, digite uma das opções de 1 a 4')