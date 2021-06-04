/*
actividad 2 
--------------------
Realizar un ejercicio donde capturemos las calificaciones de 3 materias y posteriormente sacar el promedio de cada materia
cada materia tiene 3 parciales de los cuales vamos a sacar el promedio para la materia correspondiente
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    //variables del problema
    int calAlgortmos[3];
    int calMatematicas[3];
    int calFundamentos[3];
    float promedio = 0;
    int opcion = 0;
    bool controlAccess = true;
    int i = 0;
    int calificacion = 0;
    //codigo del ejercicio
    cout << ":::::::::::Sistema de calificaciones::::::::::::" << endl;
    cout << "Tira de materias" << endl;
    cout << "1.-Algoritmos" << endl;
    cout << "2.-Matematicas discretas" << endl;
    cout << "3.-Fundamentos de bases de datos" << endl;
    cout << "4.-Salir" << endl;
    while (controlAccess)
    {
        cout << "Elija una de las opciones" << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:

            cout << "Ingresar calificaiones del 5 al 10 tomando en cuenta como el 5 el mas bajo y el 10 el mas alto" << endl;
            for (i = 0; i < 3; i++)
            {
                cout << "Ingrese la calificacion" << endl;
                cin >> calificacion;
                do
                {
                    cout << "Ingres una calificaion valida" << endl;
                    cin >> calificacion;
                } while (calificacion < 5);
                calAlgortmos[i] = calificacion;
            }

            promedio = calAlgortmos[0] + calAlgortmos[1] + calAlgortmos[2] / 3;
            cout << "El promedio en esta materia es de: " << promedio << endl;
            if (promedio > 6)
            {
                cout << "Tu calificaion es aprobatoria" << endl;
            }
            else
            {
                cout << "Nos vemos en recu" << endl;
            }
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            controlAccess = false;
            break;
        default:
            cout << "Ingrese una opcion valida" << endl;
        }
    }
    return 0;
}