#include<iostream>
#include<stdio.h>
using namespace std;

//
//OBLIGATORIO DELCARAR UNA FUNCION ANTES DE SER UTILIZADA
void bienvenida(string saludo);
int operacion();
//
int a=10;
int b=5;
int resultado;
//
string saludo = "Hola desde parametro";

void bienvenida(string saludo){
    cout<<saludo<<endl;
}

int operacion(){
    resultado=a+b;
    return resultado;
}

int main(){
    bienvenida(saludo);
    operacion();
    return 0;
}
