//ACTIVIDAD 2
//FUNCIONES
/*Calcular el area de las siguientes figuras geometricas 
-circulo 
-cuadrado
-triangulo
-rectangulo
para calcular cada una de las areas utilizar funciones y tipos de datos correspondientes
considerar los lados de cada figura y en dado caso el radio
el usuario podrá repetir las operaciones cuantas veces quiera
*/ 
#include <iostream>
#include<stdlib.h>
//libreria para operaciones matematicas
#include<math.h>

using namespace std;
//declaracion de funciones
float circulo();
float cuadrado();
float triangulo();
float rectangulo();
void menu();
void operaciones(int opc,bool controlAccess);
int setNumero();
//
void menu(){
    int opc = 0;
    bool controlAccess = true;
    while (controlAccess){
        cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout<<"::::::CALCULAR EL AREA DE FIGURAS GEOMETRICAS:::::::::"<<endl;
        cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout<<"::::  1.-Circulo                                  ::::"<<endl;
        cout<<"::::  2.-Cuadrado                                 ::::"<<endl;
        cout<<"::::  3.-Triangulo                                ::::"<<endl;
        cout<<"::::  4.-Rectangulo                               ::::"<<endl;
        cout<<"::::  5.-Salir                                    ::::"<<endl;
        cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        cin>>opc;    
        operaciones(opc,controlAccess);
    }
}

int setNumero(){
    int numero = 0;
    cout<<"Ingrese el digito"<<endl;
    cin>>numero;
    return numero;
}

float circulo(){
    int radio=0;
    float resultado = 0;
    cout<<"Para calcular el area del circulo necesitamos conocer el radio"<<endl;
    radio = setNumero();
    resultado = M_PI*pow(radio,2);
    return resultado;
}

void operaciones(int opc,bool controlAccess){
    switch (opc){
    case 1:
        cout<<"El area del circulo es: "<<circulo()<<endl;
        break;
    case 2:

        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        controlAccess=false;
        break;
    default:
        cout<<"Ingrese una opcion valida"<<endl;
        break;
    }
}
int main(){
    menu();
    return 0;
}




























