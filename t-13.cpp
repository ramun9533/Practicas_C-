#include <iostream>
using namespace std;
#define ESPACIO "\t"
int main (){
    float peso, altura, imc;
    cout <<"Proporcioname tu peso en kilogramos y presiona ENTER"<< ESPACIO <<endl;
    cin >> peso;
    cout <<"Proporcioname tu Altura en metros y presiona ENTER"<< ESPACIO <<endl;
    cin >> altura;
    imc = peso / (altura * altura);
    cout <<"Tu IMC es"<< ESPACIO << imc <<endl;
    return 0;
}