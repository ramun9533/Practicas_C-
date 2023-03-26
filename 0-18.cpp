#include <iostream>
#define SIZEMAX 8
using namespace std;
// int boobleSort(int vector[], int tamano);
int boobleSort(int vector[], int tamano)
{
    for (int i = 0; i < tamano - 1; i++)
    {
        /* code */
        for (int j = 0; j < tamano - i - 1; j++)
        {
            /* code */
            if (vector[j] > vector[j + 1])
            {
                /* code */
                int acum = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = acum;
                cout << "Intercambiando " << vector[j] << " y " << vector[j + 1] << endl;
            }
        }
    }
}

int main()
{
    int vector[SIZEMAX];
    int tamano = SIZEMAX;

    for (int i = 0; i < SIZEMAX; i++)
    {
        /* code */
        cout << "Dame el numero  " << endl;
        cin >> vector[i];
    }
    boobleSort(vector, tamano);

    for (int i = 0; i < SIZEMAX; i++)
    {
        /* code */
        cout << vector[i] << "  ";
    }
    cout << endl;

    return 0;
}