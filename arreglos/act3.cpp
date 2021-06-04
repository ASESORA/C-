#include <iostream>
#include <stdio.h>

using namespace std;
int main(){
    int a[5];
    int b[5];
    int n = 0;
    int i = 0;
    cout << endl;
    cout<<"Ingrese el limite de los numeros"<<endl;
    cin>>n;// 10
    cout << "Elementos del arreglo" << endl;
    for (i = 0; i < 5; i++){
        cout << "Ingresar [" << i << "]";
        cin >> a[i];
    }
/*
0-1-2-3-4
1-2-3-4-5
---------


*/
    for (i = 0; i < 5; i++){
        b[i] = a[5 - (i + 1)];
    }

    cout << "los numeros ivertidos sera:";
    for (i = 0; i < 5; i++){
        cout << " " << b[i];
    }

    return 0;
}