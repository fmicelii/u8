#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream file;
    file.open("./lista.txt",ios::out);

    file<<"lista:"<<endl;

    for (int i = 0; i < 10; i++){        
        string nombre;
        cout<<"ingrese nombre: ";
        cin>>nombre;

        if (file.is_open()){
            file << nombre << ", ";
        }
    }

    file.close();
}

