#include <iostream>
using namespace std;
#define ESPACIO "\t"
int main (){
    float arista, volumen;
    cout << "Proporsioname el tamaño de la arista del cubo" << ESPACIO;
    //cout << endl;
    cin >> arista;
    volumen = arista * arista * arista;
    cout << "El volumen del cubo es:"<< ESPACIO << volumen << endl;
return 0;
}
