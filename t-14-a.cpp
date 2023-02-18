#include <iostream>
#define ESPACIO "\t"
using namespace std;
int main ()
{
    int numero, numero1, modulo;
    cout <<"Dame el primer numero y presiona ENTER"<< ESPACIO<<"Dame el segundo numero y preciona enter"<< endl;
    cin >> numero >> numero1;
    modulo = numero1 % numero;
    if (modulo != 0)
      cout << "El numero    " << numero << "   No es multiplo de  " << numero1 << endl;
      else
         cout << "El numero " << numero << "   es multiplo de" << ESPACIO<< numero1 << endl;
return 0;    
}