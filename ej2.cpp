#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string var1,var2;
    ofstream archivo;
    ifstream archivo2;
    archivo.open("./2.txt", ios::app);

    cout<<"ingrese nombre: ";
    cin>>var1;
    var2=var1;

    if (archivo.is_open()){
        archivo << var1;
    }
    archivo.close();

     archivo2.open("./2.txt", ios::in);
     if (archivo2.is_open()){
         archivo2 >> var2;
     }
     cout<<var2;
     archivo2.close();
}