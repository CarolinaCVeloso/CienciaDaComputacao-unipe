A = int(input("Digite um valor inicial: "))
R = int(input("Digite uma razão R:"))

pg = [ A * R ** (i - 1) for i in range(1, 11) ]

print(pg)