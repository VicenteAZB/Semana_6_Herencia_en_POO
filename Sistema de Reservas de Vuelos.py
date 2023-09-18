class Reserva:
    def __init__(self, nombre, vuelo, fecha):
        self.nombre_del_pasajero = nombre
        self.número_de_vuelo = vuelo
        self.fecha = fecha

    def mostrar_detalle(self):
        print("\nNombre del pasajero:", self.nombre_del_pasajero)
        print("Número de vuelo:", self.número_de_vuelo)
        print("Fecha de despegue:", self.fecha)

class ReservaEconomica(Reserva):
    def __init__(self, nombre, vuelo, fecha, económica, avión):
        super().__init__(nombre, vuelo, fecha)
        self.número_reserva_económica = económica
        self.avión_reserva_económica = avión

    def mostrar_detalle(self):
        super().mostrar_detalle()
        print("Número de la reserva económica:", self.número_reserva_económica)
        print("Avión designado:", self.avión_reserva_económica)

class ReservaBusiness(Reserva):
    def __init__(self, nombre, vuelo, fecha, business, avión):
        super().__init__(nombre, vuelo, fecha)
        self.número_reserva_business = business
        self.avión_reserva_business = avión

    def mostrar_detalle(self):
        super().mostrar_detalle()
        print("Número de la reserva Business:", self.número_reserva_business)
        print("Avión designado:", self.avión_reserva_business)

class ReservaPrimeraClase(Reserva):
    def __init__(self, nombre, vuelo, fecha, primera, avión):
        super().__init__(nombre, vuelo, fecha)
        self.número_reserva_primera_clase = primera
        self.avión_reserva_primera_clase = avión

    def mostrar_detalle(self):
        super().mostrar_detalle()
        print("Número de la reserva en primera clase:", self.número_reserva_primera_clase)
        print("Avión designado:", self.avión_reserva_primera_clase)

reservae1 = ReservaEconomica("Pedro Lobos", 1, "25/09/2023", 3, "Mig 29")
reservae1.mostrar_detalle()
reservab1 = ReservaBusiness("Vanessa Arriagada", 2, "26/09/2023", 2, "Sea Harrier")
reservab1.mostrar_detalle()
reservap1 = ReservaPrimeraClase("Dylan Muñoz", 3, "27/09/2023", 7, "F-18 Superhornet")
reservap1.mostrar_detalle()
reservae2 = ReservaEconomica("Juan Oyarzo", 1, "25/09/2023", 4, "Mig 29")
reservae2.mostrar_detalle()
reservab2 = ReservaBusiness("Tomas Massú", 2, "26/09/2023", 9, "Sea Harrier")
reservab2.mostrar_detalle()
reservap2 = ReservaPrimeraClase("Elena Briones", 3, "27/09/2023", 8, "F-18 Superhornet")
reservap2.mostrar_detalle()
