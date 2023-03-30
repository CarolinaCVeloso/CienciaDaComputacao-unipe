salario = float((input("Qual o salário que será reajustado? ")))

if salario >= 500 and salario <=1500 :
    print("O salário reajustado é: " + str(salario * 1.40))
if salario >=1501 and salario <=2500:
    print("O salário reajustado é: " + str(salario * 1.50))
if salario >=2501 and salario <=3000:
    print("O salário reajustado é: " + str(salario * 1.60))
