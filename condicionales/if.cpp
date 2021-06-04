#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //declaracion de variables
    float digito1 = 0;
    float digito2 = 0;
    float respuesta = 0;
    int op = 0;
    bool controlAccess = true;
    //
    cout << "::::::::CALCULADORA::::::" << endl;
    cout << "1.-Suma" << endl;
    cout << "2.-Resta" << endl;
    cout << "3.-Divición" << endl;
    cout << "4.-Resta" << endl;
    cout << "5.-Sair" << endl;
    cout << "---------------------------" << endl;
    //declaramos el bucle while para regresar para pedir las opciones
    while (controlAccess == true){
        cout << "Elija una opción" << endl;
        cin>>op;
        switch (op){
        case 1:
            cout << "::::::::Suma::::::::" << endl;
            cout << "Ingrese el primer digito a sumar: " << endl;
            cin >> digito1;
            cout << "Ingrese el segundo digito a sumar: " << endl;
            cin >> digito2;
            respuesta = digito1 + digito2;
            cout << "La respuesta a esta operacion es: " << respuesta << endl;
            break;
        case 2:
            cout << ":::::::Resta::::::::" << endl;
            cout << "Ingrese el primer digito a restar: " << endl;
            cin >> digito1;
            cout << "Ingrese el segundo digito a restar: " << endl;
            cin >> digito2;
            respuesta = digito1 - digito2;
            cout << "La respuesta a esta operacion es: " << respuesta << endl;
            break;
        case 3:
            cout << "::::::::Suma::::::::" << endl;
            cout << "Ingrese el primer digito a dividir: " << endl;
            cin >> digito1;
            cout << "Ingrese el segundo digito a dividir: " << endl;
            cin >> digito2;
            if (digito2 > 0){
                respuesta = digito1 / digito2;
                cout << "La respuesta a esta operacion es: " <<respuesta<< endl;
            }
            else{
                cout << "Divicion por 0" << endl;
            }
            break;
        case 4:
            cout << ":::::::Multiplicacion::::::::" << endl;
            cout << "Ingrese el primer digito a multiplicar: " << endl;
            cin >> digito1;
            cout << "Ingrese el segundo digito a mutiplicar: " << endl;
            cin >> digito2;
            respuesta = digito1 * digito2;
            cout << "La respuesta a esta operacion es: " <<respuesta<< endl;
            break;
        case 5:
            controlAccess=false;
            break;
        default:
            cout<<"Ingresa una opcion valida!!!!"<<endl;
            break;
        }
    }
    return 0;
}
