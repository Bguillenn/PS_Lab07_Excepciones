#include <iostream>
#include "div_cero.h"

using namespace std;

int main(){
    double n,d;
    cout<<"Division entre dos numeros"<<endl;
    cout<<"Ingrese el primer numero(x) x/y: ";cin>>n;
    cout<<"Ingrese el segundo numero(y) x/y: ";cin>>d;
    try{
        if(d == 0) throw div_cero();
        cout<<n<<"/"<<d<<" = "<< n/d<<endl;
    }catch(div_cero &e){
        cout<<e.what()<<endl;
    }

    return EXIT_SUCCESS;
}