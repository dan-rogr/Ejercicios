#include<iostream>
#include<math.h>

using namespace std;

int numerofactorial(int num);

int main ()
{
   int num=0,fac=0;
   cout<<"Escriba un numero"<<endl;
   cin>>num;
   fac=num;
   for (int i = num-1; i>=1; i--)
   {
       fac=fac*i;

   }
   cout<<"El factorial es "<< fac<<endl;
   
}

int numerofactorial(int num)
{
    int fac=num;
    for (int i = num-1; i>=1; i--)
   {
       fac=fac*i;

   }
   return fac;
}


