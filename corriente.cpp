#include<iostream>
#include<math.h>

using namespace std;

float corriente(float tension, float valor);

int main ()
{
    float tension,valor;

    cout<<"Escriba el valor de la tension en voltios"<<endl;
    cin>>tension;
    cout<<"Escriba el valor de la resistencia en ohmios"<<endl;
    cin>>valor;
   cout<<corriente(tension,valor)<<endl;
   
}

float corriente(float tension, float valor)
{
    float corri= tension/valor;
    cout<<"La corriente es de "<<corri<<endl;

}