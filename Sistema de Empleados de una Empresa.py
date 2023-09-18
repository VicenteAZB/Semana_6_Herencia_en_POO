class Empleado:
    def __init__(self, nombre, edad, salario):
        self.nombre = nombre
        self.edad = edad
        self.salario = salario

    def describir_rol(self):
        print(f"{self.nombre} tiene la edad de {self.edad} años y su salario mensual es de ${self.salario}.")

class Gerente(Empleado):
    def __init__(self, nombre, edad, salario, empresa, tipo):
        super().__init__(nombre, edad, salario)
        self.empresa = empresa
        self.tipo = tipo

    def describir_rol(self):
        super().describir_rol()
        print(f"Trabaja en la empresa {self.empresa} y es {self.tipo}.\n")

class Ingeniero(Empleado):
    def __init__(self, nombre, edad, salario, tipo, empresa, estudio):
        super().__init__(nombre, edad, salario)
        self.tipo = tipo
        self.empresa = empresa
        self.estudio = estudio

    def describir_rol(self):
        super().describir_rol()
        print(f"Es {self.tipo} en la empresa {self.empresa}. Estudió en la {self.estudio}.\n")

class Asistente(Empleado):
    def __init__(self, nombre, edad, salario, tipo, empresa, experiencia):
        super().__init__(nombre, edad, salario)
        self.tipo = tipo
        self.empresa = empresa
        self.experiencia = experiencia

    def describir_rol(self):
        super().describir_rol()
        print(f"Es {self.tipo} en la empresa {self.empresa} y posee {self.experiencia} años de experiencia en el cargo.\n")


gerente1 = Gerente("Vicente Alvarez", 25, 3500000, "Asus Chile", "Gerente general")
gerente1.describir_rol()

ingeniero1 = Ingeniero("Maria Leiva", 30, 1000000, "Ingeniero Civil Informatico", "Chile Express", "Universidad Catolica de Temuco")
ingeniero1.describir_rol()

asistente1 = Asistente("José Gomez", 44, 800000, "Asistente de operaciones", "Paris", 5)
asistente1.describir_rol()

gerente2 = Gerente("Benjamín Barrenechea", 21, 2700000, "Apple Chile", "Gerente de ventas")
gerente2.describir_rol()

ingeniero2 = Ingeniero("Daniel Vera", 33, 1200000, "Ingeniero Civil Industrial", "Santander Chile", "Universidad de la Frontera")
ingeniero2.describir_rol()

asistente2 = Asistente("Valentina Ochoa", 24, 900000, "Asistente de ventas", "Hites", 2)
asistente2.describir_rol()
