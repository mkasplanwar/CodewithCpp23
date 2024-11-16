#include <iostream>
using namespace std;

int main (){

    int a, b;
    cout<<"Masukkan Jumlah Baris \t= ";
    cin>>a;
    cout<<"Masukkan Jumlah Kolom \t= ";
    cin>>b;

    for ( int c = 0; c <= a; c++ ){//kebawah
        for (int d = 0; d <= b; d++){

            cout<<" + ";
        }

        cout<<" + " <<endl;
    }
}