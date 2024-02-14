def calculate_wages(num_people, value_hour, months_worked, dedication_week):
    return num_people * value_hour * months_worked * dedication_week * 4

def calculate_travel(num_trips, num_people, value_tickets, value_lodging, num_days):
    return num_trips * value_lodging * num_days + (value_tickets * num_people * num_trips)

num_investigadores = int(input("Ingrese el numero de investigadores: "))
valor_hora_invs = float(input("Ingrese el valor de la hora de los investigadores: "))
meses_trabajados_invs = int(input("Ingrese el numero de meses trabajados por los investigadores: "))
dedicacion_semanal_invs = int(input("Ingrese la dedicacion semanal de los investigadores: "))

num_asistentes = int(input("Ingrese el numero de asistentes de investigacion: "))
valor_hora_asistentes = float(input("Ingrese el valor de la hora de los asistentes: "))
meses_trabajados_asistentes = int(input("Ingrese el numero de meses trabajados por los asistentes: "))
dedicacion_semanal_asistentes = int(input("Ingrese la dedicacion semanal de los asistentes: "))

valor_total_equipos = float(input("Ingrese el valor total de los equipos: "))

num_viajes = int(input("Ingrese el numero de viajes: "))
num_personas_viaje = num_investigadores + num_asistentes

valor_tiquetes = float(input("Ingrese el valor de los tiquetes: "))
valor_hospedaje = float(input("Ingrese el valor del hospedaje: "))
num_dias_viaje = int(input("Ingrese el numero de dias de viaje: "))

subtotal_investigadores = calculate_wages(num_investigadores, valor_hora_invs, meses_trabajados_invs, dedicacion_semanal_invs)
subtotal_asistentes = calculate_wages(num_asistentes, valor_hora_asistentes, meses_trabajados_asistentes, dedicacion_semanal_asistentes)
subtotal_viajes = calculate_travel(num_viajes, num_personas_viaje, valor_tiquetes, valor_hospedaje, num_dias_viaje)
subtotal = subtotal_asistentes + subtotal_investigadores + valor_total_equipos + subtotal_viajes

print("El valor de los salarios de los investigadores es: ", subtotal_investigadores)
print("El valor de los salarios de los asistentes es: ", subtotal_asistentes)
print("El valor de los equipos es: ", valor_total_equipos)
print("El valor de los viajes es: ", subtotal_viajes)
print("Subtotal:", subtotal)

total_gastos_administrativos = subtotal * 0.3
print("El valor de los gastos administrativos es: ", total_gastos_administrativos)

valor_total_sin_iva = subtotal + total_gastos_administrativos
print("El valor total sin IVA es: ", valor_total_sin_iva)

valor_final_proyecto =  valor_total_sin_iva * 1.19
print("El valor final del proyecto es: ", valor_final_proyecto)