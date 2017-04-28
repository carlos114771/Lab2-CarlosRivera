#include <iostream>
#include <math.h>
using namespace std;
int menu();
double factorial(double);

int main(){
    bool salir=false;
    while(!salir){
        switch(menu()){//inicio del switch
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
            }//fin del ejercicio 1
            case 2:{ 
                double x1,x2,x3,x4,y1,y2,y3,y4;
                double d1,d2,d3,d4;
                cout<<"Ingrese el punto x1: "<<endl;
                cin>>x1;
                cout<<"Ingrese el punto y1: "<<endl;
                cin>>y1;
                cout<<"Ingrese el punto x2: "<<endl;
                cin>>x2;
                cout<<"Ingrese el punto y2: "<<endl;
                cin>>y2;
                cout<<"Ingrese el punto x3: "<<endl;
                cin>>x3;
                cout<<"Ingrese el punto y3: "<<endl;
                cin>>y3;
                cout<<"Ingrese el punto x4: "<<endl;
                cin>>x4;
                cout<<"Ingrese el punto y4: "<<endl;
                cin>>y4;
                if(x1==x2||x1==x3||x1==x4||x2==x3||x2==x4){
                    cout<<"coordenadas invalidas"<<endl;
                }
                cout<<"Los Puntos son: "<<endl;
                cout<<"( "<<x1<<" , "<<y1<<" )"<<endl;
                cout<<"( "<<x2<<" , "<<y2<<" ) "<<endl;
                cout<<"( "<<x3<<" , "<<y3<<" ) "<<endl;
                cout<<"( "<<x4<<" , "<<y4<<" ) "<<enld;

                cout<<"Los lados del trapezoide miden: "<<endl;

              //  d1=sqrt((pow((x2-x1),2))+((pow(y2-y1),2)));
              //  d2
                break;
            }
            case 3:{
                salir=true;
                break;
            }        
        }//fin del switch
    }//fin del while
    return 0;
}
//metodo del menu

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

//metodo del factorial

double factorial(double i){
    if(i<0){
        return 0;
    }else if(i==0){
        return 1;
    }else{
        return i*factorial(i-1);
    }    
}

double distancia(int x1, int x2, int y1, int y2){
    double  distancia=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
    return distancia;
}
