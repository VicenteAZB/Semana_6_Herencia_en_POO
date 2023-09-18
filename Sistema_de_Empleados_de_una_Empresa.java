class Empleado {
    private String nombre;
    private int edad;
    private int salario;

    public Empleado(String nombre, int edad, int salario) {
        this.nombre = nombre;
        this.edad = edad;
        this.salario = salario;
    }

    public void describirRol() {
        System.out.println(nombre+" tiene la edad de "+edad+" años y su salario mensual es de $"+salario+".");
    }
}

class Gerente extends Empleado {
    private String empresa;
    private String tipo;

    public Gerente(String nombre, int edad, int salario, String empresa, String tipo) {
        super(nombre, edad, salario);
        this.empresa = empresa;
        this.tipo = tipo;
    }

    public void describirRol() {
        super.describirRol();
        System.out.println("Trabaja en la empresa "+empresa+" y es "+tipo+".\n");
    }
}

class Ingeniero extends Empleado {
    private String tipo;
    private String empresa;
    private String estudio;

    public Ingeniero(String nombre, int edad, int salario, String tipo, String empresa, String estudio) {
        super(nombre, edad, salario);
        this.tipo = tipo;
        this.empresa = empresa;
        this.estudio = estudio;
    }

    public void describirRol() {
        super.describirRol();
        System.out.println("Es "+tipo+" en la empresa "+empresa+". Estudió en la "+estudio+".\n");
    }
}

class Asistente extends Empleado {
    private String tipo;
    private String empresa;
    private int experiencia;

    public Asistente(String nombre, int edad, int salario, String tipo, String empresa, int experiencia) {
        super(nombre, edad, salario);
        this.tipo = tipo;
        this.empresa = empresa;
        this.experiencia = experiencia;
    }

    public void describirRol() {
        super.describirRol();
        System.out.println("Es "+tipo+" en la empresa "+empresa+" y posee "+experiencia+" años de experiencia en el cargo.\n");
    }
}

public class Sistema_de_Empleados_de_una_Empresa{
    public static void main(String[] args) {
        Gerente gerente1 = new Gerente("Matias Herrera", 20, 3760000, "Lenovo Chile", "Gerente general");
        gerente1.describirRol();

        Ingeniero ingeniero1 = new Ingeniero("Camilo Reyes", 33, 1500000, "Ingeniero Civil Industrial", "Unimarc", "Universidad Catolica de Temuco");
        ingeniero1.describirRol();

        Asistente asistente1 = new Asistente("Javiera Lacalle", 264, 700000, "Asistente de operaciones", "Corona", 2);
        asistente1.describirRol();
    }
}