mvalor = 0

for i in range (0,10):
    preco = float(input("Digite o valor do produto: "))

    if preco > mvalor:
        mvalor = preco
    else:
        mvalor = mvalor

print(mvalor)