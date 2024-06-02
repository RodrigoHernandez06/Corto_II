#include <iostream>
using namespace std;
int main(){
    int cant=0;

    cout<<"Ingrese la cantidad de numeros que desea que tenga el arreglo: ";
    cin>>cant;

    int num[cant];

    for(int i=0; i<cant; i++){
        cout<<"Ingrese los numeros del arreglo: ";
        cin>>num[i];
    }

    for(int i=0; i<cant; i++){
        if(num[i]%2==0){
            num[i]/=2;
        } else {
            num[i] *= 10;
        }
    }

    cout<<"Arreglo nuevo: ";
    for(int i=0; i<cant; i++){
        cout<<num[i]<<"\n";
    }

    return 0;
}