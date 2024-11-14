#include <iostream>
#include <fstream>
using namespace std;

void menu() {
    cout << "1 - abrir archivo" << endl;
    cout << "2 - eliminar archivo" << endl;
    cout << "3 - renombrar archivo" << endl;
    cout << "4 - mover archivo" << endl;
    cout << "Elegir una opcion del menú: ";
}

void abrir_archivo() {
    string texto;
    ifstream archivo2;  
    archivo2.open("./4.txt", ios::in);

    if (!archivo2.is_open()) {
        cout << "No se pudo abrir el archivo para lectura." << endl;
        return;
    }

    while (getline(archivo2, texto)) {
        cout << texto << endl;
    }

    archivo2.close();
}

int main() {
    menu();
    int aux;
    cin >> aux;
    switch (aux) {
        case 1:
            abrir_archivo();
            break;
        default:
            break;
    }

    return 0;
}
