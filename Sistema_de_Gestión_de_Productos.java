class Producto{
    private String nombre;
    private int precio;
    private String categoria;

    public Producto(String nombre, int precio, String categoria){
        this.nombre = nombre;
        this.precio = precio;
        this.categoria = categoria;
    }

    public void mostrar_detalle(){
        System.out.println("\nNombre: "+nombre+"\nPrecio: "+precio+"\nCategoria: "+categoria);
    }
}

class Electrónico extends Producto{
    private String marca;
    private String modelo;

    public Electrónico(String nombre, int precio, String categoria, String marca, String modelo){
        super(nombre, precio, categoria);
        this.marca = marca;
        this.modelo = modelo;
    }

    public void mostrar_detalle(){
        super.mostrar_detalle();
        System.out.println("Marca del Electrónico: "+marca+"\nModelo del electrónico: "+modelo);
    }
}

class Alimenticio extends Producto{
    private String marca;
    private String fecha_de_vencimiento;

    public Alimenticio(String nombre, int precio, String categoria, String marca, String fecha_de_vencimiento){
        super(nombre, precio, categoria);
        this.marca = marca;
        this.fecha_de_vencimiento = fecha_de_vencimiento;
    }

    public void mostrar_detalle(){
        super.mostrar_detalle();
        System.out.println("Marca del Alimento: "+marca+"\nFecha de vencimiento del alimento: "+fecha_de_vencimiento);
    }
}

class Vestimenta extends Producto{
    private String marca;
    private String tallas;

    public Vestimenta(String nombre, int precio, String categoria, String marca, String tallas){
        super(nombre, precio, categoria);
        this.marca = marca;
        this.tallas = tallas;
    }

    public void mostrar_detalle(){
        super.mostrar_detalle();
        System.out.println("Marca: "+marca+"\nTallas disponibles: "+tallas);
    }
}



public class Sistema_de_Gestión_de_Productos{
    public static void main(String args[]){
        Electrónico electrónico1 = new Electrónico("Celular", 199000, "Dispositivos móviles", "LG", "G7");
        electrónico1.mostrar_detalle();
        Alimenticio alimento1 = new Alimenticio("Porotos", 2990, "Legumbres", "Wasil", "17/12/2023");
        alimento1.mostrar_detalle();
        Vestimenta vestimenta1 = new Vestimenta("Zapatilla", 79000, "Calzado", "Nike SB", "39, 41, 42, 43, 44");
        vestimenta1.mostrar_detalle();
    }
}

