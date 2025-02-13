#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

// Estructura para representar un movimiento
struct Movimiento
{
    string tipo;
    string nombre;
    string actividad;
};

// Estructura para representar un plazo fijo
struct PlazoFijo
{
    float monto = 0;
    int dias = 0;
    float interes = 0;
};

// Estructura para representar una cuenta bancaria
struct Cuenta
{
    string nombre;
    string contrasenia;
    float saldo = 0;
    float dolares = 0;
    vector<Movimiento> movimientos;
    vector<PlazoFijo> plazos_fijos;
};

void inicio_cuenta(){
    string nombrex;
    ofstream archivo;
    archivo.open("../usuarios.txt", ios::app);

    cout<<"ingrese nombre: ";
    cin>>nombrex;

    if (archivo.is_open()){
        archivo<< nombrex;
    }
    archivo.close();
};



// Función para mostrar el menú principal
void menu_principal(Cuenta usuario)
{
    cout << endl;
    cout << "Bienvenido/a al sistema bancario, " << usuario.nombre << endl;
    cout << "Saldo en cuenta: $ " << usuario.saldo << endl;
    cout << "Dólares: USD$ " << usuario.dolares << endl;
    cout << "Plazos fijos armados: " << usuario.plazos_fijos.size() << endl;
    cout << endl;
    cout << "1 - Ingresar efectivo." << endl;
    cout << "2 - Retirar efectivo." << endl;
    cout << "3 - Comprar y/o vender dólares." << endl;
    cout << "4 - Retirar dólares." << endl;
    cout << "5 - Armar plazo fijo." << endl;
    cout << "6 - Cancelar plazo fijo." << endl;
    cout << "7 - Pedir préstamo." << endl;
    cout << "8 - Ver movimientos." << endl;
    cout << "9 - Actualizar datos." << endl;
    cout << "10 - Salir del sistema." << endl;
    cout << endl;
    cout << "Elegir una opcion del menú: " << endl;
}

// 1
void ingresar_efectivo(Cuenta &usuario, int opcion) {
}

// 2
void retirar_efectivo(Cuenta &usuario, int opcion){
}

// 3
void manejar_dolares(Cuenta &usuario, int opcion) {}

// 4
void retirar_dolares(Cuenta &usuario, int opcion) {}

// 5
void armar_plazo_fijo(Cuenta &usuario, int opcion) {}

// 6
void cancelar_plazo_fijo(Cuenta &usuario, int opcion) {}

// 7
void pedir_prestamo(Cuenta &usuario, int opcion) {}

// 8
void ver_movimientos(Cuenta usuario) {}

// 9
void actualizar_datos(Cuenta &usuario, int opcion) {}

int main()
{
    inicio_cuenta();
    Cuenta usuario;
    int opcion = 0;

    while (opcion != 10)
    {
        menu_principal(usuario);
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            ingresar_efectivo(usuario, opcion);
            break;
        case 2:
            retirar_efectivo(usuario, opcion);
            break;
        case 3:
            manejar_dolares(usuario, opcion);
            break;
        case 4:
            retirar_dolares(usuario, opcion);
            break;
        case 5:
            armar_plazo_fijo(usuario, opcion);
            break;
        case 6:
            cancelar_plazo_fijo(usuario, opcion);
            break;
        case 7:
            pedir_prestamo(usuario, opcion);
            break;
        case 8:
            ver_movimientos(usuario);
            break;
        case 9:
            actualizar_datos(usuario, opcion);
            break;
        case 10:
            cout << "Gracias por utilizar nuestro sistema " << usuario.nombre << ", vuelva pronto." << endl;
            break;
        default:
            cout << "Opción no válida. Intente nuevamente." << endl;
            break;
        }
    }
}
