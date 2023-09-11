#include <iostream>
#include <stdlib.h>
using namespace std;

class Producto{

private:
    string nombre;
    int precio;
    string categoria;

public:
    Producto(string n, int p, string c){
        nombre = n;
        precio = p;
        categoria = c;
    }

    void mostrar_detalles(){
        cout<<"Nombre: "<<nombre<<"\n" "Precio: "<<precio<<"\n" "Categoria: "<<categoria<<endl;
    }
};

class Electronico : public Producto{
private:
    int idelectronico;
    string marca;

public:
    Electronico(string n, int p, string c, int id, string m) : Producto(n, p, c){
        idelectronico = id;
        marca = m;
    }

    void mostrar_detalles(){
        Producto::mostrar_detalles();
        cout<<"Id electronico: "<<idelectronico<<"\n" "Marca: "<<marca <<"\n"<<endl;
    }
};

class Alimenticio : public Producto{
private:
    int idalimento;
    string tipo;

public:
    Alimenticio(string n, int p, string c, int id, string t) : Producto(n, p, c){
        idalimento = id;
        tipo = t;
    }

    void mostrar_detalles(){
        Producto::mostrar_detalles();
        cout<<"Id alimento: "<<idalimento<<"\n" "Tipo de alimento: "<<tipo<<"\n"<<endl;
    }
};

class Vestimenta : public Producto{
private:
    int idvestuario;
    string tipovestuario;

public:
    Vestimenta(string n, int p, string c, int id, string t) : Producto(n, p, c){
        idvestuario = id;
        tipovestuario = t;
    }

    void mostrar_detalles(){
        Producto::mostrar_detalles();
        cout<<"Id de la prenda de vestir: "<<idvestuario<<"\n" "Tipo de prenda: "<<tipovestuario<<"\n"<<endl;
    }
};



int main(){
    Electronico electronico1("Lavadora", 200000, "Electronico", 1, "Mademsa");
    electronico1.mostrar_detalles();

    Electronico electronico2("Refrigerador", 500000, "Electronico", 2, "Samsung");
    electronico2.mostrar_detalles();

    Alimenticio alimento1("Huachalomo", 7990, "Alimenticio", 1, "Carnes");
    alimento1.mostrar_detalles();

    Alimenticio alimento2("Manzanas verdes Tia Clara (1KG)", 990, "Alimenticio", 2, "Frutas");
    alimento2.mostrar_detalles();

    Vestimenta prenda1("Converse All Start", 50000, "Vestimenta", 1, "Calzado");
    prenda1.mostrar_detalles();

    Vestimenta prenda2("Jeans Blue Levis", 40000, "Vestimenta", 2, "Pantalon");
    prenda2.mostrar_detalles();

    return 0;
}


