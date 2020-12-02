#include <iostream>

using namespace std;
int main()
{
    int i, n;
    float arr[100];

    cout<<"Digite el total de datos: "<<endl;
    cin>>n;

    for(i=0; i<n; ++i){
        cout<<"Ingrese el dato "<<i+1<< " : ";
        cin>>arr[1];
    }

    for(i=1; i<n; ++i){
        if(arr[0]<arr[i])
            arr[0]= arr[i];
    }

    cout<<"El numero mayor es: "<<arr[0];


}