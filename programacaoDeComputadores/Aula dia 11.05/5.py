sim = 0
nao = 0

for i in range (0,15):
    op = int(input("Você gosta de beterraba? Digite 1 para Sim e 2 para Não "))

    if op == 1:
        sim = sim +1
    elif op == 2:
        nao = nao +1
    else:
        print("Erro")

print("Respostas sim: ", sim, "Respostas nao: ", nao)