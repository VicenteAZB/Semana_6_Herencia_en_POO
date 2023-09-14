#include <iostream>
#include <stdlib.h>
using namespace std;

class Empleado{

private:
    string nombre;
    int edad;
    int salario;

public:
    Empleado(string n, int e, int s){
        nombre = n;
        edad = e;
        salario = s;
    }

    void describir_rol(){
        cout<<nombre<<" tiene la edad de "<<edad<<" anios y su salario mensual es de $"<<salario<<"."<<endl;
    }
};

class Gerente : public Empleado{
private:
    string empresa;
    string tipo;

public:
    Gerente(string n, int e, int s, string em, string t) : Empleado(n, e, s){
        empresa = em;
        tipo = t;
    }

    void describir_rol(){
        Empleado::describir_rol();
        cout<<"Trabaja en la empresa "<<empresa<<" y es "<<tipo <<"."<<"\n"<<endl;
    }
};

class Ingeniero : public Empleado{
private:
    string tipo;
    string empresa;
    string estudio;

public:
    Ingeniero(string n, int e, int s, string t, string em, string es) : Empleado(n, e, s){
        tipo = t;
        empresa = em;
        estudio = es;
    }

    void describir_rol(){
        Empleado::describir_rol();
        cout<<"Es "<<tipo<<" en la empresa "<<empresa<<". Estudio en la "<<estudio<<"."<<"\n"<<endl;
    }
};

class Asistente : public Empleado{
private:
    string tipo;
    string empresa;
    int exp;

public:
    Asistente(string n, int e, int s, string t, string em, int ex) : Empleado(n, e, s){
        tipo = t;
        empresa = em;
        exp = ex;
    }

    void describir_rol(){
        Empleado::describir_rol();
        cout<<"Es "<<tipo<<" en la empresa "<<empresa<<" y posee "<<exp<<" anios de experiencia en el cargo."<<"\n"<<endl;
    }
};



int main(){
    Gerente gerente1("Vicente Alvarez", 19, 2500000, "Samsung Chile", "Gerente general");
    gerente1.describir_rol();

    Ingeniero ingeniero1("Martin Cid", 30, 1000000, "Ingeniero Civil Informatico", "Starken Chile", "Universidad Catolica de Temuco");
    ingeniero1.describir_rol();

    Asistente asistente1("Lucas Chavez", 44, 800000, "Asistente de operaciones", "Ripley", 5);
    asistente1.describir_rol();

    Gerente gerente2("Vicente Barrenechea", 21, 2700000, "Apple Chile", "Gerente de ventas");
    gerente2.describir_rol();

    Ingeniero ingeniero2("Edian Bravo", 33, 1200000, "Ingeniero Civil Industrial", "Coca Cola Chile", "Universidad Autonoma de Temuco");
    ingeniero2.describir_rol();

    Asistente asistente2("Martina Gomez", 24, 900000, "Asistente de ventas", "Falabella", 2);
    asistente2.describir_rol();

    return 0;
}


