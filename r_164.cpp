#include <iostream>
using namespace std;
int main (){
    int x0 ,  y0 , x1 , y1 , dx , dy , area;

    cout<<"Dame las cordenadas de la aristas en este orden:<<endl<< x0 , y0 , x1, y1"<<endl<<"presona espacio entre cada numero"<<endl;
    cin>>x0>>y0>>x1>>y1;
    dx = x1 - x0;
    dy = y1 - y0;
    area = dx * dy;
    cout<<endl;
    cout<<"El area es: "<<area<<endl;

    //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    
    return 0;
}