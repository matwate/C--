import random
import time
import math
def ej1():
    random.seed(time.time())
    dice1 = random.randint(1, 6)
    dice2 = random.randint(1, 6)
    initialRoll = dice1 + dice2
    
    playerinput = int(input(('Bienvenido al juego Craps, escriba 1 para lanzar los dados: \n')))
    if playerinput == 1:
        if initialRoll == 7 or initialRoll == 11:
            print(f'El resultado de los dados fue {initialRoll}, ganaste')
        elif initialRoll == 2 or initialRoll == 3 or initialRoll == 12:
            print(f'El resultado de los dados fue {initialRoll}, perdiste')
        else:
            stop = False
            print(f"El resultado de los dados fue {initialRoll}")
            playerinput = int(input('Escriba 1 para lanzar los dados nuevamente: \n'))
            if playerinput == 1:
                    random.seed(time.time())
                    dice1 = random.randint(1, 6)
                    dice2 = random.randint(1, 6)
                    newRoll = dice1 + dice2
                    if newRoll == initialRoll:
                        print(f'El resultado de los dados fue {newRoll}, ganaste')
                        stop = True
                        
                    elif newRoll == 7:
                        print(f'El resultado de los dados fue {newRoll}, perdiste')
                        stop = True
                    else:
                        print(f'El resultado de los dados fue {newRoll}')
                        
            if not stop:            
                playerinput = int(input('Escriba 1 para lanzar los dados nuevamente: \n'))
                if playerinput == 1:
                        random.seed(time.time())
                        dice1 = random.randint(1, 6)
                        dice2 = random.randint(1, 6)
                        newRoll = dice1 + dice2
                        if newRoll == initialRoll:
                            print(f'El resultado de los dados fue {newRoll}, ganaste')
                            stop = True
                        elif newRoll == 7:
                            print(f'El resultado de los dados fue {newRoll}, perdiste')
                            stop = True
                        else:
                            print(f'El resultado de los dados fue {newRoll}')
                            
            
                if not stop:
                    playerinput = int(input('Escriba 1 para lanzar los dados nuevamente: \n'))
                    if playerinput == 1:
                            random.seed(time.time())
                            dice1 = random.randint(1, 6)
                            dice2 = random.randint(1, 6)
                            newRoll = dice1 + dice2
                            if newRoll == initialRoll:
                                print(f'El resultado de los dados fue {newRoll}, ganaste')
                                
                            elif newRoll == 7:
                                print(f'El resultado de los dados fue {newRoll}, perdiste')
                                
                            else:
                                print(f'El resultado de los dados fue {newRoll}')
                    if not stop:
                        playerinput = int(input('Escriba 1 para lanzar los dados nuevamente: \n'))
                        if playerinput == 1:
                                random.seed(time.time())
                                dice1 = random.randint(1, 6)
                                dice2 = random.randint(1, 6)
                                newRoll = dice1 + dice2
                                if newRoll == initialRoll:
                                    print(f'El resultado de los dados fue {newRoll}, ganaste')
                                    
                                elif newRoll == 7:
                                    print(f'El resultado de los dados fue {newRoll}, perdiste')
                                    
                                else:
                                    print(f'El resultado de los dados fue {newRoll}')
                                                   
    else:
        print('Escriba 1 para lanzar los dados')

def ej2():
    x = float(input("Ingrese el valor de x: \n"))
    y = float(input("Ingrese el valor de y: \n"))
    
    z = math.sqrt(x + (math.pow(y,2)/(3 + x))) - ((math.pow(x,2)/(math.pow(y,3) + x))- ((5) * (math.sqrt(3 * x))));
    print(f"El resultado de la ecuación es: {z}")
def main():
    playerinput = int(input("Elija el ejercicio que desea ejecutar 1 o 2 : \n"))
    if playerinput == 1:
        ej1()
    elif playerinput == 2:
        ej2()
    else:
        print("Ejercicio no encontrado")
                
                

if __name__ == "__main__":
    main()