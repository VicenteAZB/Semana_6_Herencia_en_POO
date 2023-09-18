class Reserva {
    private String nombreDelPasajero;
    private int numeroDeVuelo;
    private String fecha;

    public Reserva(String nombre, int vuelo, String fecha) {
        this.nombreDelPasajero = nombre;
        this.numeroDeVuelo = vuelo;
        this.fecha = fecha;
    }

    public void mostrarDetalle() {
        System.out.println("\nNombre del pasajero: "+nombreDelPasajero);
        System.out.println("Número de vuelo: "+numeroDeVuelo);
        System.out.println("Fecha de despegue: "+fecha);
    }
}

class ReservaEconomica extends Reserva {
    private int numeroReservaEconomica;
    private String avionReservaEconomica;

    public ReservaEconomica(String nombre, int vuelo, String fecha, int economica, String avion) {
        super(nombre, vuelo, fecha);
        this.numeroReservaEconomica = economica;
        this.avionReservaEconomica = avion;
    }

    @Override
    public void mostrarDetalle() {
        super.mostrarDetalle();
        System.out.println("Número de la reserva económica: "+numeroReservaEconomica);
        System.out.println("Avión designado: "+avionReservaEconomica);
    }
}

class ReservaBusiness extends Reserva {
    private int numeroReservaBusiness;
    private String avionReservaBusiness;

    public ReservaBusiness(String nombre, int vuelo, String fecha, int business, String avion) {
        super(nombre, vuelo, fecha);
        this.numeroReservaBusiness = business;
        this.avionReservaBusiness = avion;
    }

    @Override
    public void mostrarDetalle() {
        super.mostrarDetalle();
        System.out.println("Número de la reserva Business: "+numeroReservaBusiness);
        System.out.println("Avión designado: "+avionReservaBusiness);
    }
}

class ReservaPrimeraClase extends Reserva {
    private int numeroReservaPrimeraClase;
    private String avionReservaPrimeraClase;

    public ReservaPrimeraClase(String nombre, int vuelo, String fecha, int primera, String avion) {
        super(nombre, vuelo, fecha);
        this.numeroReservaPrimeraClase = primera;
        this.avionReservaPrimeraClase = avion;
    }

    @Override
    public void mostrarDetalle() {
        super.mostrarDetalle();
        System.out.println("Número de la reserva en primera clase: "+numeroReservaPrimeraClase);
        System.out.println("Avión designado: "+avionReservaPrimeraClase);
    }
}

public class Sistema_de_Reservas_de_Vuelos{
    public static void main(String[] args) {
        ReservaEconomica reservae1 = new ReservaEconomica("Laura Pacheco", 1, "28/09/2023", 2, "Airbus A350");
        reservae1.mostrarDetalle();

        ReservaBusiness reservab1 = new ReservaBusiness("Nadia Burgos", 2, "29/09/2023", 5, "Boeing 777");
        reservab1.mostrarDetalle();

        ReservaPrimeraClase reservap1 = new ReservaPrimeraClase("Esteban Neira", 3, "30/09/2023", 8, "Airbus A320");
        reservap1.mostrarDetalle();
    }
}
