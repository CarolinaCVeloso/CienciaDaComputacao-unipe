salario = float(input('Digite o salário a ser reajustado '))

if salario < 300:
    print('O salário reajustado é igual a R$', salario*1.45)
elif salario >= 300 and salario <= 600:
    print('O salário reajustado é igual a R$', salario*1.25)
else:
    print('O salário reajustado é igual a R$', salario*1.15)