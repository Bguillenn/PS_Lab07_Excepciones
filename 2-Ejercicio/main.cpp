#include <iostream>
#include "div_cero.h"

using namespace std;

double division(double n, double d);

int main(){
    double n,d; //NUMERADOR Y DENOMINADOR
    cout<<"Division entre dos numeros"<<endl;
    cout<<"Ingrese el primer numero(x) x/y: ";cin>>n;
    cout<<"Ingrese el segundo numero(y) x/y: ";cin>>d;
    try{
        division(n,d);
    }catch(div_cero &e){
        cout<<"LOG: Excepcion manejada desde el main"<<endl;
        cout<<e.what()<<endl;
    }

    return EXIT_SUCCESS;
}

double division(double n, double d){
    try{
        if(d == 0) throw div_cero();
        return n/d;
    }catch(div_cero &e){
        cout<<"LOG: Excepcion manejada desde la funcion y enviada al main"<<endl;
        throw e;
    }
}