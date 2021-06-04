#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    //0-9 = 1-10
    int vector[3];
    int i=0;
    int calificaiones = 0;
    float prom = 0;
    //recorrer el vector
    for(i=0; i<3;i++){
        cout<<"Ingresar calificaciones "<<endl;
        cin>>calificaiones;
        vector[i]=calificaiones;
    }
    for(i=0;i<3; i++){
        cout<<vector[i];
    }
    return 0;
}

