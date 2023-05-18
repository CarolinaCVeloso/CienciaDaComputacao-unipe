A = int(input("Digite um valor inicial: "))
R = int(input("Digite uma razão R:"))

pa = A + (10 * R)
for i in range(A, pa, R):
    print(i)