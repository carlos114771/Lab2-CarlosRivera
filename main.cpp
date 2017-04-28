#include <iostream>
#include <math.h>
using namespace std;
int menu();
double factorial(double);

int main(){
    bool salir=false;
    while(!salir){
        switch(menu()){
            case 1:{
                double  numero,resultado,n=13;
                cout<<"Ingrese un numero: "<<endl;
                cin>>numero;
                for(int i=1;i<=n;i++){
                    resultado+=pow(numero,i)/factorial(i);
                }
                resultado+=1;
                cout<<"El resultado es: "<<resultado<<endl;
                break;
            }
            case 2:{
                break;
            }
            case 3:{
                salir=true;
                break;
            }
        
        }
    }
    return 0;
}


int menu(){
    int opcion;
    bool valido=false;
    do{
        cout<<" Menu "<<endl
            <<"1)  Ejercicio 1"<<endl
            <<"2)  Ejercicio 2"<<endl
            <<"3)  Salir"<<endl;
        cout<<" Ingrese una Opcion: ";
        cin>>opcion;
        if(opcion>0&&opcion<5){
            valido=true;
        }else{
            cout<<"opcion no valida, intente de nuevo... "<<endl;
        }
    }while(!valido);
    return opcion;
}


double factorial(double i){
    if(i<0){
        return 0;
    }else if(i==0){
        return 1;
    }else{
        return i*factorial(i-1);
    }

}
