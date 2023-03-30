idade = int(input("Digite a idade do atleta que irá competir: "))

if idade >= 5 and idade <= 10:
    print("Este atleta tem", idade, "anos e está na categoria Infantil")
elif idade >= 11 and idade <= 17:
    print("Este atleta tem", idade, "anos e está na categoria Juvenil")
elif idade >= 18 and idade <= 32:
    print("Este atleta tem", idade, "anos e está na categoria Adulto")
elif idade >= 33:
    print("Este atleta tem", idade, "anos e está na categoria Master")
else:
    print("Este atleta é muito jovem para para participar da competição")



