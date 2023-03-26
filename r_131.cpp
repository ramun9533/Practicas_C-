#include<iostream>
#define SPACE '\t'
using namespace std;
int main(){
    //<------------------------------------------------------------------------------------------------
    //bucket of water = bow, size of my pool = somp, size of my neighbor's pool = somnp, leak size = ls
    //neighbor leak size = nls, my leak size = mls
    //----------------------------------------------------------------------------------------------->
    int somp, mbow, mls, somnp, nbow, nls, acum, acum1;
    acum = 0;
    acum1 = 0;
//<----------------------------------------------------------
//Mis Datos
//----------------------------------------------------------->
cout<<"Dime tus datos (capacidad de piscina, capacidad de tu cubeta, y cuanto peirdes en la fuga) y presiona enter"<<endl;
//cout<<"cada dato que proporsuines separalo con un espacio"<<endl;
cin>>somp>>mbow>>mls;
//<----------------------------------------------------------
//Datos del Vecino
//----------------------------------------------------------->
cout<<"Dime los datos de tu vecino (capacidad de piscina, capacidad de tu cubeta, y cuanto peirdes en la fuga) y presiona enter"<<endl;
//cout<<"cada dato que proporcines separalo con un espacio"<<endl;    
cin>>somnp>>nbow>>nls;
    // cin>>somp;
    // cout<<"Dime la capacidad de tu cubeta en litros"<<SPACE<<endl;
    // cin>>mbow;
    // cout<<"Dime el cuantos litros pierdes de tu fuga"<<SPACE<<endl;
    // cin>>mls;
    
    //cout<<"Dime cuantos litros puede contener la piscina del vecino y presiona enter"<<SPACE<<endl;
    // cin>>somnp;
    // cout<<"Dime la capacidad de la cubeta en litros del vecino"<<SPACE<<endl;
    // cin>>nbow;
    // cout<<"Dime el cuantos litros pierde el vecino de su fuga"<<SPACE<<endl;
    // cin>>nls;
    while (somp > 0 && somnp > 0)
        {
            /* code */
            somp =somp - mbow + mls;
            if (somp > 0)
                {
                    /* code */
                    acum++;
                }
            somnp =somnp - nbow + nls;
            if (somnp > 0)
                {
                    /* code */
                    acum1++;
                }

        }
     //   cout<<acum<<SPACE<<acum1<<endl;
if (acum1 > acum)
{
    /* code */
    cout<<"yo   "<<acum1<<endl;
}
if (acum > acum1)
{
    /* code */
    cout<<"Vecino   "<<acum<<endl;
}
if (acum1 == acum)
{
    /* code */
    cout<<"EMPATE"<<acum<<endl;
}

    return 0;
}