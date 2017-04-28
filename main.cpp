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
                double ladot1_1, ladot1_2, ladot1_3, ladot2_1,ladot2_2,ladot2_3;
                double h1,h2,h3,h4,BD;
                double ha,hb,hc;
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
                cout<<"("<<x1<<","<<y1<<")"<<endl;
                cout<<"("<<x2<<","<<y2<<")"<<endl;
                cout<<"("<<x3<<","<<y3<<")"<<endl;
                cout<<"("<<x4<<","<<y4<<")"<<endl;

                cout<<"Los lados del trapezoide miden: "<<endl;
             
                d1=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
                d2=sqrt((pow(x3-x1,2))+(pow(y3-y1,2)));
                d3=sqrt((pow(x4-x3,2))+(pow(y4-y3,2)));
                d4=sqrt((pow(x2-x4,2))+(pow(y2-y4,2)));
               
                cout<<"Lado 1: "<<d1<<endl;
                cout<<"Lado 2: "<<d2<<endl;
                cout<<"Lado 3: "<<d3<<endl;
                cout<<"Lado 4: "<<d4<<endl;
                
                cout<<"Los Lados del triagulo 1 miden: "<<endl;
                ladot1_1=sqrt((pow(x3-x1,2))+(pow(y3-y1,2)));
                ladot1_2=sqrt((pow(x4-x3,2))+(pow(y4-y3,2)));
                ladot1_3=sqrt((pow(x1-x4,2))+(pow(y1-y4,2)));

                cout<<"Lado 1: "<<ladot1_1<<endl;
                cout<<"Lado 2: "<<ladot1_2<<endl;
                cout<<"Lado 3: "<<ladot1_3<<endl;

                cout<<"Los Lados del triangulo 2 miden: "<<endl;
                ladot2_1=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
                ladot2_2=sqrt((pow(x2-x4,2))+(pow(y2-y4,2)));
                ladot2_3=sqrt((pow(x1-x4,2))+(pow(y1-y4,2)));

                cout<<"Lado 1: "<<ladot2_1<<endl;
                cout<<"Lado 2: "<<ladot2_2<<endl;
                cout<<"Lado 3: "<<ladot2_3<<endl;

                double semiperimetro1=(ladot1_1+ladot1_2+ladot1_3)/2;
                cout<<"Semiperimetro triangulo 1: "<<semiperimetro1<<endl;
                
                double semiperimetro2=(ladot2_1+ladot2_2+ladot2_3)/2;
                cout<<"Semiperimetro triangulo 2: "<<semiperimetro2<<endl;
               
                double perimetro1=ladot1_1+ladot1_2+ladot1_3; 
                cout<<"Perimetro triangulo 1: "<<perimetro1<<endl;
               
                double perimetro2=ladot2_1+ladot2_2+ladot2_3;
                cout<<"Perimetro triangulo 2: "<<perimetro2<<endl;

                cout<<"Las alturas del Triangulo 1 miden: "<<endl;
                h1=x2-x1;
                h2=x3-x2;
                h3=x4-x3;
                h4=x1-x4;
                BD=x4-x2;
                
                ha=(2*(sqrt(semiperimetro1-h1)*(semiperimetro1-h2)*(semiperimetro1-h3)))/h1;
                hb=(2*(sqrt(semiperimetro1-h1)*(semiperimetro1-h2)*(semiperimetro1-h3)))/h2;
                hc=(2*(sqrt(semiperimtero1-h1)*(semiperimetro1-h2)*(semiperimetro1-h3)))/h3;

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
