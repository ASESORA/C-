//ACTIVIDAD 2
//FUNCIONES

/*Calcular el area de las siguientes figuras geometricas 

-circulo 

-cuadrado

-triangulo

-rectangulo

para calcular cada una de las areas utilizar funciones y tipos de datos correspondientes
considerar los lados de cada figura y en dado caso el radio

el usuario podr� repetir las operaciones cuantas veces quiera*/ 

#include<iostream>
#include<stdio.h>
using namespace std;
//prototipos de funciones
void menu();
void calcularArea(int opcion);
float circulo(float radio);
float cuadrado(float ladoCuad1, float ladoCuad2);
float triangulo(float baseTria, float alturaTria);
float rectangulo(float baseRec, float alturaRec);
bool controlAcceso=true;
//
void menu(){
	int opcion;
	while(controlAcceso){
		cout<<"calcule el area de la figura: 1.- Circulo, 2.- Cuadrado, 3.- Triangulo, 4.- Rectangulo, 5.- Salir"<<endl;
	    cin>>opcion;
	    calcularArea(opcion);
	}
}
 
void calcularArea(int opcion){
	switch(opcion){
		case 1:
			float radio;
		    cout<<"::::CIRCULO:::: Ingrese el radio del circulo"<<endl;
		    cin>>radio;
		    while(radio<=0){
		    	cout<<"ingrese un valor mayor a cero"<<endl;
		    	cin>>radio;
			}
		    cout<<"el area del circulo es: "<<circulo(radio);
		    break;
		    
		case 2: 
		    float ladoCuad1, ladoCuad2;
		    cout<<"::::CUADRADO:::: Ingrese la medida del primer lado"<<endl;
		    cin>>ladoCuad1;
		        while(ladoCuad1<=0){
		        	cout<<"ingrese un valor mayor a cero"<<endl;
		        	cin>>ladoCuad1;
				}
		    cout<<"::::CUADRADO:::: Ingrese la medida del segundo lado"<<endl;
		    cin>>ladoCuad2;
		        while(ladoCuad2<=0){
		        	cout<<"ingrese un valor mayor a cero"<<endl;
		        	cin>>ladoCuad2;
				}
		    cout<<"el area del cuadrado es: "<<cuadrado(ladoCuad1, ladoCuad2);
		    break;
		    
		case 3: 
		    float baseTria, alturaTria;
		    cout<<"::::TRIANGULO:::: Ingrese la medida de la base"<<endl;
			cin>>baseTria;
			    while(baseTria<=0){
			    	cout<<"ingrese un valor mayor a cero"<<endl;
			    	cin>>baseTria;
				}
			cout<<"::::TRIANGULO:::: Ingrese la medida de la altura"<<endl;
			cin>>alturaTria;
			    while(alturaTria<=0){
			    	cout<<"ingrese un valor mayor a cero"<<endl;
			    	cin>>alturaTria;
				}
			cout<<"el area del triangulo es: "<<triangulo(baseTria, alturaTria);
			break;
			
		case 4:
			float baseRec, alturaRec;
		    cout<<"::::RECTANGULO:::: Ingrese la medida de la base"<<endl;
			cin>>baseRec;
			    while(baseRec<=0){
			    	cout<<"ingrese un valor mayor a cero"<<endl;
			    	cin>>baseRec;
				}
			cout<<"::::RECTANGULO:::: Ingrese la medida de la altura"<<endl;
			cin>>alturaRec;
			    while(alturaRec<=0){
			    	cout<<"ingrese un valor mayor a cero"<<endl;
			    	cin>>alturaRec;
				}
			cout<<"el area del rectangulo es: "<<rectangulo(baseRec, alturaRec);
			break;
			
		case 5:
		    controlAcceso=false;
			break;
				
		default:
			cout<<"opcion invalida"<<endl;
			break;	    
	}
}
//operaciones

float circulo(float radio){
	float pi=3.1416;
	float areaCir;
	cout<<"el area del circulo es: "<<endl;
	areaCir=pi*radio*radio;
	return areaCir;
}

float cuadrado(float ladoCuad1, float ladoCuad2){
	float areaCuad;
	cout<<"el area del cuadrado es: "<<endl;
	areaCuad=ladoCuad1*ladoCuad2;
	return areaCuad;
} 

float triangulo(float baseTria, float alturaTria){
	float areaTria;
	cout<<"el area del triangulo es: "<<endl;
	areaTria=baseTria*alturaTria/2;
	return areaTria;
}

float rectangulo(float baseRec, float alturaRec){
	float areaRec;
	cout<<"el area del rectangulo es: "<<endl;
	areaRec=baseRec*alturaRec;
    return areaRec;	
}

int main (){
	menu();//5
	//calcularArea(opcion);
	return 0;
}
