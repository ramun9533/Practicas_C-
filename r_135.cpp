//<--------------------------------------------------------------------------------------------------------
//Entrada

//La entrada estará compuesta por un número indicando la cantidad de casos de prueba que vendrán a continuación. Cada caso de prueba consistirá en una serie de números enteros no negativos, con una de las secuencias que Turing nos ha pedido que analicemos. Todas las secuencias tendrán al menos dos números, y terminarán con un -1 adicional, que no deberá ser procesado.
//Salida

//Para cada caso de prueba, el programa mostrará el número de veces que la máquina ha cambiado el término de la sucesión y el siguiente número de la misma.
//Entrada de ejemplo
//4
//1 5 7 9 11 -1
//1 2 3 4 5 6 7 8 10 -1
//999996 999998 0 2 4 -1
//10 9 8 7 3 2 -1

//Salida de ejemplo

//1 13
//1 12
//0 6
//2 1
//--------------------------------------------------------------------------------------------------------->
#include <iostream>
using namespace std;

int main() {
    int num, prev, curr, diff, count;

    while (true) {
        // Inicializar valores para cada caso de prueba
        prev = -1;
        count = 0;
        diff = 0;

        // Leer los números hasta que se encuentre un -1
        cin >> curr;
        while (curr != -1) {
            if (prev != -1) { // No verificar en la primera iteración
                int currDiff = curr - prev;
                if (currDiff != diff) {
                    count++;
                    diff = currDiff;
                }
            }
            prev = curr;
            cin >> curr;
        }

        // Imprimir resultados para cada caso de prueba
        cout << count - 1 << " " << prev + diff << endl;

        // Salir si se leyó un -1
        if (prev == -1) break;
    }

    return 0;
}
// #include<iostream>
// using namespace std;
// int main()
// {
//    int vector[5]={2,4,6,8,10};
//     int j, ac, ac1, ac2, ac3, acum, acum1;
//     ac= 0;
//ac1=0;
//acum = 0;
    
//     cout<<"dame dato<<endl;
//     cin>>ac;
    
//     cout<<"dif es: "<<acum1<<endl;
//     return 0;
// }