flamengo = int(input('Digite o número de gols marcados pelo Flamengo: '))
vasco = int(input('Digite o número de gols marcados pelo Vasco: '))

if flamengo > vasco:
    print('Flamengo ganhou')
elif vasco > flamengo:
    print('Vasco ganhou')
else:
    print('Vasco e Flamengo empataram')