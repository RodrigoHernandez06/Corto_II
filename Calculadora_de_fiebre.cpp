//Calculadora de fiebre
#include <iostream>
using namespace std;
int main(){
    float temp=0;

    cout<<"Bienvenido, ingrese la temperatura del paciente en grados celsius: ";
    cin>>temp;

    if(temp<37.4){
        cout<<"No hay fiebre";
    } else if(temp>=37.4 && temp<=37.9){
        cout<<"El paciente tiene febricula";
    } else if(temp>=38.0 && temp<=38.9){
        cout<<"El paciente tiene fiebre moderada";
    } else if(temp>=39.0 && temp<=39.9){
        cout<<"El paciente tiene fiebre alta";
    } else if(temp>=40.0 && temp<=41.5){
        cout<<"El paciente tiene fiebre muy alta";
    } else if(temp>41.5){
        cout<<"El paciente tiene hiperpirexia";
    }
    return 0;
}