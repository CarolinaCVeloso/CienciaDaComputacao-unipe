A = int(input("Digite o valor para calcular fatorial: "))

resultado = 1
sequencia = str(A)

for i in range(A, 1, -1):
    resultado *= i

for i in range(A-1, 1, -1):
    sequencia += " x " + str(i)
    
print(f"{A}! = {sequencia} = {resultado}")