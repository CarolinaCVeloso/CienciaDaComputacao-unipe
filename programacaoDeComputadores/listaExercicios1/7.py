sexo = int(input('Escolha 1 - sexo masculino ou 2 - sexo Feminino '))
h = float(input('Digite a altura em metros '))

if sexo == 1:
    print('O peso ideal é igual a', (72*h)-58)
else:
    print('O peso ideal é igual a', (62.1*h)-44.7)