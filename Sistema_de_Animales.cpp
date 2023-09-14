#include <iostream>
#include <stdlib.h>
using namespace std;

class Animal {

protected:
    string nombre;
    int edad;

public:
    Animal(string n, int e){
        nombre = n;
        edad = e;
    }

    void sonido(string sound){
        cout<<sound<<" "<<sound<<"\n"<<endl;
    }
};

class Perro : public Animal{
private:
    string raza;
    string origen;

public:
    Perro(string n, int e, string r, string o) : Animal(n, e){
        raza = r;
        origen = o;
    }

    void sonido(string sound){
        cout<<"Nombre: "<<Animal::nombre<<" ; Edad: "<<Animal::edad<<" ; Raza: "<<raza<<" ; Origen: "<<origen<<". "<<"El perro hace: "<<endl; 
        Animal::sonido(sound);
    }
};

class Gato : public Animal{
private:
    string raza;
    string origen;

public:
    Gato(string n, int e, string r, string o) : Animal(n, e){
        raza = r;
        origen = o;
    }

    void sonido(string sound){
        cout<<"Nombre: "<<Animal::nombre<<" ; Edad: "<<Animal::edad<<" ; Raza: "<<raza<<" ; Origen: "<<origen<<". "<<"El gato hace: "<<endl; 
        Animal::sonido(sound);
    }
};

class Pajaro : public Animal{
private:
    string raza;
    string origen;

public:
    Pajaro(string n, int e, string r, string o) : Animal(n, e){
        raza = r;
        origen = o;
    }

    void sonido(string sound){
        cout<<"Nombre: "<<Animal::nombre<<" ; Edad: "<<Animal::edad<<" ; Raza: "<<raza<<" ; Origen: "<<origen<<". "<<"El pajaro hace: "<<endl; 
        Animal::sonido(sound);
    }
};



int main(){
    Perro perro1("Black", 10, "Pastor Aleman", "Aleman");
    perro1.sonido("woooof");

    Gato gato1("Minino", 10, "Romano", "Italiano");
    gato1.sonido("Miiiaaaauuuu");

    Pajaro pajaro1("Polo", 4, "Halcon", "Mexicano");
    pajaro1.sonido("aaaaaajjj");

    Perro perro2("Lucy", 9, "Poodle", "Francesa");
    perro2.sonido("wauuu wauuu");

    Gato gato2("Garfield", 3, "Siames", "Arabe");
    gato2.sonido("miauu miauu miauu");

    Pajaro pajaro2("Willy", 2, "Gorrion", "Estadounidense");
    pajaro1.sonido("pio pio");
    
    return 0;
}


