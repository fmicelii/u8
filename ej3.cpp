#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int n1=1,n2=1,suma;
    ofstream archivo;
    archivo.open("./3.txt", ios::app);

    do
    {
        cout<<"ingrese numero 1: ";
        cin>>n1;
        cout<<"ingrese numero 2: ";
        cin>>n2;

        suma=n1+n2;

    
        if (archivo.is_open()){
            archivo<< n1 << " + " << n2 << " = " << suma<<endl;
        }
        cout<<"suma hecha!"<<endl;
    } while (n1 != 0 && n2 != 0);
    
    

    archivo.close();

}