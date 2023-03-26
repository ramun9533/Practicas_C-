#include<iostream>
using namespace std;
int main(){
    int num, residuo, divicion;
    while (1)
    {
        /* code */
        cout<<"dame el numero  ";
        cin>>num;
        if (num == 0)
        {
            /* code */
            return 0;
        }
        residuo = num % 9;
        divicion = num / 9;
        if (residuo > 0)
        {
            /* code */
            cout<<residuo;
        }
        for (int i = 0; i < divicion; i++)
        {
            /* code */
            cout<<"9";
        }
        
        cout<<endl;
        
    }
    
}