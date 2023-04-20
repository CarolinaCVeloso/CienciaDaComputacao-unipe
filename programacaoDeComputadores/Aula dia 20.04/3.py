executar = input('Deseja executar o programa? Digite sim ou nao ')

while executar != 'nao':
    distancia = float(input('Digite a distância percorrida pelo atleta em metros: '))
    tempo = float(input('Digite o tempo em minutos que o atleta levou para percorrer a distância: '))
    velocidade = distancia/tempo
    print('A velocidade média em m/s é:', velocidade)
    executar = input('Deseja continuar a executar o programa? Digite sim ou nao ')