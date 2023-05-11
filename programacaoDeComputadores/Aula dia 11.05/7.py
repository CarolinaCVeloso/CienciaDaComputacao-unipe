otimo = 0
bom = 0
regular = 0

for i in range (0,15):
    op = int(input("Digite sua opnião em relação ao filme: ótimo - 3, bom -2, regular - 1 "))

    if op == 1:
        regular += 1
    elif op == 2:
        bom += 1
    elif op == 3:
        otimo  += 1
    else:
        print("Erro")

print("Pessoas que acharam ótimo:  ", otimo, "Pessoas que acharam bom:  ", bom, "Pessoas que acharam regular:  ", regular)
