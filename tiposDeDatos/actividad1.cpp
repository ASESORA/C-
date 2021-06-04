#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
//declaracion de funcion
void bienvenida();
void scope();
//variables globales
int main(){
    cout<<"Hola bienvenido al curso de C++"<<endl;
    bienvenida();
    return 0;
}

void scope(){
    int a = 5;// variable local
    cout<<"Iprecion de variable"<<a<<endl;
    if(a!=1){
        cout<<"Imprecion de variable"<<a<<endl;
    }else{
        cout<<"No imprimimos nada"<<endl;
    }

}

void bienvenida(){
    int entero = 0;
    float flotante = 2.2;
    char caracter = 'M';
    string nombre = "Jose Ali Mendoza Armas";
    //imprimimos por consola los datos que agregamos
    cout<<"Tipos de datos"<<endl;
    cout<<"Dato entero"<<entero<<endl;
    cout<<"dato flotante: "<<flotante<<endl;
    cout<<"dato caracter: "<<caracter<<endl;
    cout<<"dato String: "<<nombre<<endl;
}




