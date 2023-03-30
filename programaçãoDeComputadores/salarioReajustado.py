
salario = float((input("Qual o salário que será reajustado? ")))

if salario <= 300:
    print("O salário reajustado é: " + str(salario * 1.35))
else:
    print("O salário reajustado é: " + str(salario * 1.15))


