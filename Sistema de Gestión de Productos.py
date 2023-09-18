class Producto:
    def __init__(self, nombre, precio, categoria):
        self.nombre = nombre
        self.precio = precio
        self.categoria = categoria
    
    def mostrar_detalle(self):
        print(f"\n{self.nombre}:\nSu precio es de ${self.precio}.\nPertenece a la categoria {self.categoria}.")

class Electrónico(Producto):
    def __init__(self, nombre, precio, categoria, marca, modelo):
        super().__init__(nombre, precio, categoria)
        self.marca = marca
        self.modelo = modelo

    def mostrar_detalle(self):
        super().mostrar_detalle()
        print(f"La marca del {self.nombre} es {self.marca}.\nEl modelo del {self.nombre} es {self.modelo}.")

class Alimenticio(Producto):
    def __init__(self, nombre, precio, categoria, marca, salud):
        super().__init__(nombre, precio, categoria)
        self.marca = marca
        self.salud = salud

    def mostrar_detalle(self):
        super().mostrar_detalle()
        print(f"La marca del {self.nombre} es {self.marca}.\nEs {self.salud} para el organismo.")

class Vestimenta(Producto):
    def __init__(self, nombre, precio, categoria, marcamodelo, talla):
        super().__init__(nombre, precio, categoria)
        self.marcamodelo = marcamodelo
        self.talla = talla

    def mostrar_detalle(self):
        super().mostrar_detalle()
        print(f"La marca y el modelo son: {self.marcamodelo}.\nLas tallas disponibles son: {self.talla}.")


Celular = Electrónico("Celular", 499900, "Electrónico", "Samsung", "Galaxy Note 20 PRO")
Celular.mostrar_detalle()
Notebook = Electrónico("Notebook", 599000, "Electrónico", "Asus", "Tuf Gaming F15")
Notebook.mostrar_detalle()
Carne = Alimenticio("Lomo Vetado", 12990, "Alimenticio", "Corte Criollo", "Saludable")
Carne.mostrar_detalle()
Torta = Alimenticio("Torta", 5990, "Alimenticio", "Tortas Marcela", " Dañino")
Torta.mostrar_detalle()
Zapatilla = Vestimenta("Zapatilla", 59990, "Vestimenta", "Reebok Court Peak", "40, 41, 42, 43, 44, 45")
Zapatilla.mostrar_detalle()
Sudadera = Vestimenta("Sudadera", 19990, "Vestimenta", "Oneill HODDIE SUNRISE Gris", "S, M, L, XL, XXL")
Sudadera.mostrar_detalle()