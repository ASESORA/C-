#include<iostream>
#include<stdlib.h>
#include <math.h>
//https://docs.google.com/forms/d/e/1FAIpQLSegJItlZ9LVvOoTFXb5lu4HAcDtWFE5TQKYqB7z3CZwTN2t2Q/viewform?usp=sf_link

using namespace std;//1
void setData();//2
void operation(int x1,int x2,int y1,int y2);//3

int main(){//4,5
    setData();
    return 0;
}

void setData(){
    int x1,x2,y1,y2;//6
    cout<<"Calcular el area entre dos puntos"<<endl;
    cout<<"Ingresar X1"<<endl;
    cin>>x1;
    cout<<"Ingresar X2"<<endl;
    cin>>x2;
    cout<<"Ingresar Y1"<<endl;
    cin>>y1;
    cout<<"Ingresar Y2"<<endl;
    cin>>y2;
    operation(x1,x2,y1,y2);//7
}

void operation(int x1,int x2,int y1,int y2){//8
    int distancia=0;//9
    distancia = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    cout<<"La distancia es de: "<<distancia;//10
}


