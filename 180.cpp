#include <iostream>
using namespace std;

int main() {
    int numCasos;
    long long lados[3];
    cin >> numCasos;
    for(int i = 0; i < numCasos; i++) {
        cin >> lados[0] >> lados[1] >> lados[2];
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2 - j; k++) {
                if(lados[k] > lados[k+1]) {
                    long long temp = lados[k];
                    lados[k] = lados[k+1];
                    lados[k+1] = temp;
                }
            }
        }
        if(lados[0] + lados[1] < lados[2]+1)
            cout << "IMPOSIBLE" << endl;
        else if(lados[0]*lados[0] + lados[1]*lados[1] > lados[2]*lados[2])
            cout << "ACUTANGULO" << endl;
        else if(lados[0]*lados[0] + lados[1]*lados[1] < lados[2]*lados[2])
            cout << "OBTUSANGULO" << endl;
        else
            cout << "RECTANGULO" << endl;
    }
    return 0;
}
