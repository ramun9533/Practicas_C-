#include <iostream>
using namespace std;
int main(){
    int r[] = {8, 9, 7, 4, 6, 3, 5, 1, 2, 0};
    int acum = 0;
    for (int i = 0; i < 10; i++)
        {
            if (r[i] > acum)
                acum = r[i];

        }
        cout<< "El numero mayor es: " << acum<<endl;
        return 0;
}