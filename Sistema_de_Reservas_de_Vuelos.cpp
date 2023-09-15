#include <iostream>
#include <stdlib.h>
using namespace std;

class Reserva{

    private:

    string nombre_del_pasajero;
    int numero_de_vuelo;
    string fecha;

    public:

    Reserva(string n, int v, string f){
        nombre_del_pasajero = n;
        numero_de_vuelo  = v;
        fecha = f;
    }

    void mostrar_detalle(){
        cout<<"\nNombre del pasajero: "<<nombre_del_pasajero<<"\nNumero de vuelo: "<<numero_de_vuelo<<"\nFecha de despegue: "<<fecha<<endl;
    }
};

class  ReservaEconomica : public Reserva{

    private:

    int numero_reserva_economica;
    string avion_reserva_economica;

    public:

    ReservaEconomica(string n, int v, string f, int e, string a) : Reserva(n, v, f){
        numero_reserva_economica = e;
        avion_reserva_economica = a;
    }

    void mostrar_detalle(){
        Reserva::mostrar_detalle();
        cout<<"Numero de la reserva economica: "<<numero_reserva_economica<<"\nAvion designado: "<<avion_reserva_economica<<endl;
    }
};

class  ReservaBusiness : public Reserva{

    private:

    int numero_reserva_business;
    string avion_reserva_business;

    public:

    ReservaBusiness(string n, int v, string f, int b, string a) : Reserva(n, v, f){
        numero_reserva_business = b;
        avion_reserva_business = a;
    }

    void mostrar_detalle(){
        Reserva::mostrar_detalle();
        cout<<"Numero de la reserva Business: "<<numero_reserva_business<<"\nAvion designado: "<<avion_reserva_business<<endl;
    }
};

class  ReservaPrimeraClase : public Reserva{

    private:

    int numero_reserva_primera_clase;
    string avion_reserva_primera_clase;

    public:

    ReservaPrimeraClase(string n, int v, string f, int p, string a) : Reserva(n, v, f){
        numero_reserva_primera_clase = p;
        avion_reserva_primera_clase = a;
    }

    void mostrar_detalle(){
        Reserva::mostrar_detalle();
        cout<<"Numero de la reserva en primera clase: "<<numero_reserva_primera_clase<<"\nAvion designado: "<<avion_reserva_primera_clase<<endl;
    }
};

int main(){
    ReservaEconomica reservae1("Vicente Alvarez", 1, "17/09/2023", 10, "F-14");
    reservae1.mostrar_detalle();
    ReservaBusiness reservab1("Jacob Torres", 1, "20/09/2023", 4, "F-16");
    reservab1.mostrar_detalle();
    ReservaPrimeraClase reservap1("Matias Alvarez", 1, "22/09/2023", 3, "F-18 Superhornet");
    reservap1.mostrar_detalle();
    ReservaEconomica reservae2("Javier Molina", 2, "17/09/2023", 12, "F-14");
    reservae2.mostrar_detalle();
    ReservaBusiness reservab2("Cristian Gonzalez", 2, "20/09/2023", 7, "F-16");
    reservab2.mostrar_detalle();
    ReservaPrimeraClase reservap2("Monserrat Lopez", 2, "22/09/2023", 4, "F-18 Superhornet");
    reservap2.mostrar_detalle();
    return 0;
}









