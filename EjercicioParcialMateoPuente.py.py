import math

numHabitaciones, numBanos = 0,0
hab1l, hab1w = 0,0
hab2l, hab2w = 0,0
hab3l, hab3w = 0,0
ba1isPremium, ba2isPremium, ba3isPremium = 0,0,0
ba1Area, ba2Area, ba3Area = 0,0,0
areaSocialisPremium = 0
areaSocialArea = 0
hasPatio = 0
patiol, patiow = 0,0
isGarageSimpleDouble = 0
garageArea = 0

print("Calculadora de precios para TuttiCuadrati")
print("Seccion 1 -- Habitaciones")

numHabitaciones = int(input("Cuantas habitaciones quiere?, De 1 a 3 \n"))
if numHabitaciones < 1:
    numHabitaciones =1
if numHabitaciones > 3:
    numHabitaciones =3

hab1l = int(input("Ingrese el largo de la habitacion 1\n"))
if hab1l < 2:
    hab1l = 2
if hab1l > 10:
    hab1l  = 10
    
hab1w = int(input("Ingrese el ancho de la habitacion 1\n"))
if hab1w < 2:
    hab1w = 2
if hab1l > 10:
    hab1w = 10


if numHabitaciones > 1:
    hab2l = int(input("Ingrese el largo de la habitacion 2\n"))
    if hab2l < 2:
        hab2l = 2
    if hab2l > 10:
        hab2l = 10
        
    hab2w = int(input("Ingrese el ancho de la habitacion 2\n"))
    if hab2w < 2:
        hab2w = 2
    if hab2l > 10:
        hab2w = 10
    if numHabitaciones > 2:
        hab3l = int(input("Ingrese el largo de la habitacion 3\n"))
        if hab3l < 2:
            hab3l = 2
        if hab3l > 10:
            hab3l = 10
            
        hab3w = int(input("Ingrese el ancho de la habitacion 3\n"))
        if hab3w < 2:
            hab3w = 2
        if hab3l > 10:
            hab3w = 10

areahab1 = hab1l * hab1w
areahab2 = hab2l * hab2w
areahab3 = hab3l * hab3w

areaTotalHabs = areahab1+ areahab2 + areahab3

print("Seccion 2 -- Banos")
numBanos = int(input("cuantos banos quiere? de 1 a 3\n"))

if numBanos < 1:
    numBanos =1
if numBanos > 3:
    numBanos =3
    
ba1isPremium = int(input("El primer bano es premium>? 0:No, 1: Si\n"))
if ba1isPremium > 1 or ba1isPremium < 0:
    print("Codigo Invalido, se asume que no es premium\n")
if(ba1isPremium == 0):
    ba1Area = 5
if(ba1isPremium == 1):
     ba1Area = 9
     
if(numBanos > 1):
    ba2isPremium = int(input("El segundo bano es premium>? 0:No, 1: Si\n"))
    if ba2isPremium > 1 or ba1isPremium < 0:
        print("Codigo Invalido, se asume que no es premium\n")
    if(ba2isPremium == 0):
        ba2Area = 5
    if(ba2isPremium == 1):
         ba2Area = 9
    
    
    if(numBanos > 2):
        ba3isPremium = int(input("El segundo bano es premium>? 0:No, 1: Si\n"))
        if ba3isPremium > 1 or ba3isPremium < 0:
            print("Codigo Invalido, se asume que no es premium\n")
        if(ba3isPremium == 0):
            ba3Area = 5
        if(ba3isPremium == 1):
             ba3Area = 9
             
areaTotalBanos = ba1Area + ba2Area + ba3Area

print("Seccion 3 -- Area Social\n")
areaSocialIsPremium = int(input("El area social es premium? 0:No, 1: Si\n"))
if (areaSocialIsPremium > 1 or areaSocialIsPremium < 0):
    print("Codigo invalido, se asumira que no es premium\n")

if(areaSocialIsPremium == 0):
    areaSocialArea = 20
if(areaSocialIsPremium == 1):
    areaSocialArea = 40
areaSocialAreaTotal = areaSocialArea;

print("Seccion 4 -- Patio\n")

hasPatio = int(input("La casa tiene patio? 0: No, 1: Si\n"))
if(hasPatio > 1 or hasPatio < 0):
    print("Codigo invalido, se asumira que no tiene\n")
if hasPatio == 1:
    patiol = int(input("Ingrese el largo del Patio\n"))
    
    if(patiol < 2):
        patiol =2
    if(patiol > 8):
        patiol =2
    
    patiow = int(input("Ingrese el ancho del Patio\n"))
    
    if(patiow < 2):
        patiow =2
    if(patiow > 8):
        patiow =2
areaPatio = patiol * patiow
print("Seccion5 -- Garage\n")
isGarageSimpleDouble = int(input("El garage es doble? 0: No, 1: si\n"))
  
if (isGarageSimpleDouble > 1 or isGarageSimpleDouble < 0):    
     print("COdigo invalid, se asumira que es simple\n")
if(isGarageSimpleDouble == 0):
    garageArea = 10
if(isGarageSimpleDouble == 1):
    garageArea = 20
    
totalArea = areaTotalHabs + areaTotalBanos + areaSocialAreaTotal + areaPatio + garageArea;

totalAreaNoGarage = totalArea - garageArea;
totalAreaNoGarage = totalAreaNoGarage * 1.25;

precioCasa = 0

if(totalAreaNoGarage < 100):
     precioCasa = totalAreaNoGarage * 8000000 + garageArea * 5000000
else:
    precioCasa = totalAreaNoGarage * 9000000 + garageArea * 5000000

if(precioCasa >= 1000000000 ):
    precioCasa = precioCasa * 0.95

print('El recio total de la casa es', precioCasa)

print("Ejercicio 2")
x = int(input("Ingrese el valor de x\n"))
y = int(input("Ingrese el valor de y\n"))
a = pow((math.sqrt(((5 * x) + (math.sqrt(pow(y,x-1)))/(y + 2 * x)))),3);
b = (pow(pow(x,2),3))/(pow(y,3) * x + 1)
c = 3 * (math.sqrt(3 + math.sqrt(x - 1)))
print("El resultado de la ecuacion es ", a - (b-c))