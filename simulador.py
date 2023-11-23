import random
from datetime import datetime

horarioatual = datetime.now()
horarioformatado = horarioatual.strftime("%d/%m/%Y %H:%M:%S")

nivelfumaca = [100, 125, 150, 200, 225, 250, 300, 325, 350, 400, 425, 450, 500, 525, 550, 600, 625, 650, 700, 725, 750, 800, 825, 850, 900]

simulador = random.choice(nivelfumaca)

print(simulador)

if simulador > 600:
    print(horarioformatado)
    print(f"Nível de Fumaça ALTO")
    print(f"Ação: Alertas visual e sonoro")
else:
    print(f"Última atualização feita em:", horarioformatado)
    
    
