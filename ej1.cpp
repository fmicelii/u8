#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string var1;
    ofstream archivo;
    archivo.open("./1.txt", ios::app);

    for (int i = 0; i < 10; i++){
        cout<<"ingrese algo: ";
        cin>>var1;

        if (i==9){
            if (archivo.is_open()){
                archivo << var1 << ".";
            }
        }
        else{
            if (archivo.is_open()){
                archivo << var1 << ", ";
            }
        }
        
    }
    archivo.close();
}