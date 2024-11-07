#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file1;
    string busqueda;
    file1.open("./lista.txt",ios::in);

    // string nombre;
    // cout<<"ingrese nombre que quiere buscar en la lista: ";
    // cin>>nombre;
    
    if (file1.is_open()){
        file1 >> busqueda;
    }
    cout << busqueda;
    file1.close();
}

