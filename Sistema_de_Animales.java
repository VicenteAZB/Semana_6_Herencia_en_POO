class Animal {
    protected String nombre;
    protected int edad;

    public Animal(String nombre, int edad) {
        this.nombre = nombre;
        this.edad = edad;
    }

    public void sonido(String sound) {
        System.out.println(sound+" "+sound+"\n");
    }
}

class Perro extends Animal {
    private String raza;
    private String origen;

    public Perro(String nombre, int edad, String raza, String origen) {
        super(nombre, edad);
        this.raza = raza;
        this.origen = origen;
    }

    public void sonido(String sound) {
        System.out.println("Nombre: "+nombre+"\nEdad: "+edad+" años\nRaza: "+raza+"\nOrigen: "+origen+"\nEl perro hace: ");
        super.sonido(sound);
    }
}

class Gato extends Animal {
    private String raza;
    private String origen;

    public Gato(String nombre, int edad, String raza, String origen) {
        super(nombre, edad);
        this.raza = raza;
        this.origen = origen;
    }

    public void sonido(String sound) {
        System.out.println("Nombre: "+nombre+"\nEdad: "+edad+" años\nRaza: "+raza+"\nOrigen: "+origen+"\nEl gato hace: ");
        super.sonido(sound);
    }
}

class Pajaro extends Animal {
    private String raza;
    private String origen;

    public Pajaro(String nombre, int edad, String raza, String origen) {
        super(nombre, edad);
        this.raza = raza;
        this.origen = origen;
    }

    public void sonido(String sound) {
        System.out.println("Nombre: "+nombre+"\nEdad: "+edad+" años\nRaza: "+raza+"\nOrigen: "+origen+"\nEl pájaro hace: ");
        super.sonido(sound);
    }
}

public class Sistema_de_Animales {
    public static void main(String[] args) {
        Perro perro1 = new Perro("Malulo", 2, "Chihuahua", "Potugués");
        perro1.sonido("waf");

        Gato gato1 = new Gato("Canelo", 7, "Siames", "Brasileño");
        gato1.sonido("Meoooow");

        Pajaro pajaro1 = new Pajaro("Cotorro", 2, "Loro", "Español");
        pajaro1.sonido("kareweo kareweo");
    }
}
