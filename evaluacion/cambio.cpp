#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


int main(){
	int i=0;
    string texto = "";
    char mensaje[50];
    cout<<"ingrese el mensaje [¡Limite de 50 caracteres!]"<<endl;
	cin>>mensaje[i];
    i++;
    //operacion
    for(int i=0;i<50; i++){
        //capturar dato y convertirlo a entero.
        int caracter = mensaje[i];
        cout<<caracter<<endl;
        //
        //
        if(caracter >= 65 && caracter <= 90){
            cout<<"Es una letra mayuscula"<<endl;
            char min=caracter+32;
            cout<<"Convertiendo a minuscula..."<<endl;
            cout<<"Letra minuscula: "<<min<<endl;
            //break;
        }else{
            if(caracter >= 97 && caracter <= 122){
                cout<<"Es una letra minuscula"<<endl;
                char mayus=caracter-32;
                cout<<"Convertiendo a mayuscula..."<<endl;
                cout<<"Letra mayuscula: "<<mayus<<endl;
                //break;
            }
        }
    }
    //
	cout<<"el mensaje escrito en mayusculas es: "<<mensaje<<endl;
	return 0;
}
