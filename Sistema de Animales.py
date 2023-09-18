class Animal:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def sonido(self, sound):
        print(f"{sound} {sound}\n")

class Perro(Animal):
    def __init__(self, nombre, edad, raza, origen):
        super().__init__(nombre, edad)
        self.raza = raza
        self.origen = origen

    def sonido(self, sound):
        print(f"Nombre: {self.nombre}\nEdad: {self.edad} años\nRaza: {self.raza}\nOrigen: {self.origen}\nEl perro hace: ")
        super().sonido(sound)

class Gato(Animal):
    def __init__(self, nombre, edad, raza, origen):
        super().__init__(nombre, edad)
        self.raza = raza
        self.origen = origen

    def sonido(self, sound):
        print(f"Nombre: {self.nombre}\nEdad: {self.edad} años\nRaza: {self.raza}\nOrigen: {self.origen}\nEl gato hace: ")
        super().sonido(sound)

class Pajaro(Animal):
    def __init__(self, nombre, edad, raza, origen):
        super().__init__(nombre, edad)
        self.raza = raza
        self.origen = origen

    def sonido(self, sound):
        print(f"Nombre: {self.nombre}\nEdad: {self.edad} años\nRaza: {self.raza}\nOrigen: {self.origen}\nEl pájaro hace: ")
        super().sonido(sound)

perro1 = Perro("Draco", 3, "Husky Siberiano", "Irlandes")
perro1.sonido("wauf")

gato1 = Gato("Tomás", 1, "Romano", "Italiano")
gato1.sonido("Miiiauuuu")

pajaro1 = Pajaro("Odín", 4, "Ruiseñor", "Salvadoreño")
pajaro1.sonido("koo koo")

perro2 = Perro("Charlie", 8, "Pastor Alemán", "Alemán")
perro2.sonido("wau wau")

gato2 = Gato("Lulu", 2, "Siames", "Arabe")
gato2.sonido("miau miau miau")

pajaro2 = Pajaro("Oregón", 5, "Gorrion", "Chileno")
pajaro2.sonido("pio pio")
