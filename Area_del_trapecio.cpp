//Area de un trapecio
#include <iostream>
using namespace std;

int main(){
    float A1=0, A2=0, B=0, A=0;

    cout<<"Ingrese todas las medidas en centimetros porfavor \n"
        <<"Ingrese la primer altura del trapecio: ";
    cin>>A1;

    cout<<"Ingrese la segunda altura del trapecio: ";
    cin>>A2;

    cout<<"Ingrese la base del trapecio: ";
    cin>>B;

    if(A1>0 && A2>0 && B>0){
        A=((A1+A2)/2)*B;
        cout<<"El area del trapecio es: "<<A<<" centimetros cuadrados";
    } else {
        cout<<"Alguna de las dimensiones que ha ingresado no es valida, intente nuevamente.";
    }
    return 0;
}