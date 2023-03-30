sigla = input("Digite uma sigla de um Estado Brasileiro ").upper()


if sigla == "PB" or sigla == "PE":
    print("O estado", sigla, "pertence ao Nordeste")
elif sigla == "SP" or sigla == "RJ":
    print("O estado", sigla, "pertence ao Suldeste")
else:
    print("Erro, digite um dos seguintes estados: PB, PE, RJ, SP") 