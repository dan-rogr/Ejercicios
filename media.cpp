#include<iostream>

using namespace std;

int main ()
{
    int totalDatos;
    int i;
    float suma=0;
    float media;

    cout<<"Digite el total de datos con los que desea trabajar"<<endl;
    cin>>totalDatos;

    float a[totalDatos];

    for (i=0; i<totalDatos; i++)
    {
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
        suma+=a[i];

    }

    media=suma/totalDatos;

    cout<<"La media es: "<<media<<endl;

    
}