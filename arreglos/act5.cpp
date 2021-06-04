#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int i = 0;
    //declaracion de arreglo de tipo entero
    int arrayInt[10];
    //delcaracion de arreglo de tipo caracter
    char arrayChar[10];
    //declaracion de arreglo de tipo string ó caneda de texto
    string arrayString[10];
    
    arrayInt[0] = 5;
    arrayInt[3] = 199;
    arrayInt[5] = 3;

    arrayChar[0] = 'C';
    arrayChar[1] = 'U';
    arrayChar[2] = 'T';
    //cin>>arrayInt[0];

    while(i<10){
        cout<<arrayChar[i]<<endl;
        i++;   
    }

    i=0;
    
    for(i=0; i<10; i++){
        //0-9
        cout<<arrayInt[i]<<endl;
    }

    return 0;
}