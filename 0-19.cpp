#include <iostream>
#define SIZEMAX 8
using namespace std;
// int boobleSort(int vector[], int tamano);
int boobleSort(int vector[], int tamano)
{
    for (int i = 0; i < tamano - 1; i++)
    {
        /* code */
        cout << "Iteración " << i + 1 << ":" << endl;
        for (int j = i + 1; j < tamano; j++)
        {
            /* code */
            cout << "Comparando " << vector[i] << " y " << vector[j] << endl;
            if (vector[i] > vector[j])
            {
                /* code */
                int acum = vector[i];
                vector[i] = vector[j];
                vector[j] = acum;
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