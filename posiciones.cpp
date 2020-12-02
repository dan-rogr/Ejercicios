#include <iostream>
using namespace std;

int main()
{
  int n = 10, numeros, contador = 0;
  int arregloa[n];
  int *parregloa = &arregloa[0];

  cout << "Digite los 10 numeros" << endl;

  for (int i = 0; i < n; i++)
  {
    cout << "Escriba el numero " << i + 1 << endl;
    cin >> numeros;
    arregloa[i] = numeros;
    int parregloa = arregloa[i];
  }
  for (int i = 0; i < n; i++)
  {
   cout << arregloa[i] << " ";
  }
}