#include <iostream>
using namespace std;

int main(){

    //cara menampilkan jumlah index : cout<<sizeof(angka)/sizeof(*angka);
    //cara lainnya adalah dengan membuat variabel baru;
    //jmlarray = sizeof(angka)/sizeof(*angka);
    //cout<<jmlarray;

    int jmlarray;
    int angka[] = {87, 90, 56, 89, 66};
    jmlarray = sizeof(angka)/sizeof(*angka);
    cout<<endl;
    cout<<jmlarray; 

    for (int i = 0; i < jmlarray; i++){

        cout<<angka[i] <<endl ;
    }
}