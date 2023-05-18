num = int(input("Digite um número: "))
i1 = 0
i2 = 0
i3 = 0
i4 = 0


while num != -1:

    if num in range (0, 25):
        i1 = i1 + 1

    elif num  in range (26, 50):
        i2 = i2 + 1

    elif num  in range (51, 75):
        i3 = i3 + 1

    elif num in range (76, 100):
        i4 = i4 + 1

    else:
        print("Erro")

    num = int(input("Digite um número: "))

print("Entre 0-25, temos", i1, "números")
print("Entre 26-50, temos", i2, "números")
print("Entre 51-75, temos", i3, "números")
print("Entre 76-100, temos", i4, "números")

