#include<iostream>

#include<math.h>

using namespace std;

float distancia(float x1, float y1, float x2, float y2);

int main ()
{
    float x1,x2,y1,y2;
    cout<<"Escriba los datos del primer punto"<<endl;
    cout<<"Digite el valor del eje x"<<endl;
    cin>>x1;
    cout<<"Digite el valor del eje y"<<endl;
    cin>>y1;
    cout<<"Escriba los datos del segundo punto"<<endl;
    cout<<"Digite el valor del eje x"<<endl;
    cin>>x2;
    cout<<"Digite el valor del eje y"<<endl;
    cin>>y2;

    cout<< "El valor de la distancia euclidiana es "<< distancia(x1,y1,x2,y2)<<endl;
}

float distancia(float x1, float y1, float x2, float y2)
{
    float euclidiana= sqrt(pow (x2-x1, 2.) +pow (y2-y1, 2.));

    return euclidiana;
}