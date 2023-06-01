salario = []
estagiario = 0
junior = 0
senior = 0
pleno = 0

for i in range (15):
    salario.append(int(input("Digite um salário: ")))

    if salario[i] >= 500 and salario[i] <= 1000:
        estagiario += 1
    elif salario[i] >= 1001 and salario[i] <= 2500:
        junior += 1
    elif salario[i] >= 2501 and salario[i] <= 4500:
        senior += 1
    elif salario[i] >= 4501 and salario[i] <= 10000:
        pleno += 1
    else: 
        print("Salário não se enquadra em nenhuma categoria")
    
print("Existem", estagiario, "estagiários")
print("Existem", junior, "juniors")
print("Existem", senior, "seniors")
print("Existem", pleno, "plenos")