#include <iostream>
#include "funciones.h"
using namespace std;
float pregCant();
float pregPorc();
float CalcMens();
int main()
{
    float ahorro, Sueldo, Precio, porcEnganche, mens;
    cout << "Dime tu ahorro " << endl;
    ahorro = pregCant();
    // cout << ahorro;
    cout << "Dime tu sueldo " << endl;
    Sueldo = pregCant();
    cout << "Dame el precio " << endl;
    Precio = pregCant();
    // Pregunto pocentaje y me retorna lo que deberia de dar de enganche minimo
    cout << "Cual es el porcentaje de enganche " << endl;
    porcEnganche = pregPorc(Precio);
    if (ahorro >= porcEnganche)
    {
        mens = CalcMens(Precio, porcEnganche);

        if (mens > (Sueldo * .5))
        {
            /* code */
            cout << "No es suficiente para pagara tu mensaualidad" << endl;
        }
        else
        {
            cout << "Tu ahorro es:  " << ahorro << endl;
            cout << "Tu Sueldo es:   " << Sueldo << endl;
            cout << "El precio es:  " << Precio << endl;
            cout << "Tu Enganche es:  " << porcEnganche << endl;
            cout << "Tu Mensualidad es:  " << mens << endl;
            cout << "Feliz compra" << endl;
        }
    }
    else
    {
        cout << "No es suficiente para pagara tu mensaualidad" << endl;
    }

    // cout << "ahorro   " << ahorro << endl;
    // cout << "Sueldo   " << Sueldo << endl;
    // cout << "precio   " << Precio << endl;
    // cout << "Enganche   " << porcEnganche << endl;
}