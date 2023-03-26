//#include <stdio.h>
#include<iostream>
using namespace std;
int main() {
    int nCasos, n;
    cin>>nCasos;
    while(nCasos--) {
        cin>>n;//scanf("%d", &n);
        cout<<"0"<<n / 3600<<":";
        n = n % 3600;
        cout<<"0"<<n / 60<<":";
        n = n % 60;
        cout<<"0"<<n<<endl;
    }cout<<"4"<<nCasos<<endl;
    printf("hola mundo");
    return 0;
}
