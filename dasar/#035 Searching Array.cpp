#include <iostream>
using namespace std;

int main(){

    int angka [] = {10, 3, 6, 2, 1, 7, 8};
    int lenght = sizeof(angka)/sizeof(*angka);

    int cari, hasilcari;

    cout<<"Data Tersedia = " <<endl;

    for (int a = 0; a < lenght; a++){

        cout<<"Index Ke - "<<a<<" = "<<angka[a]<<endl;
    }

    cout<<"Data Yang Di Cari = ";
    cin>>cari;

    for (int b = 0; b < lenght; b++){

        if (cari == angka[b]){

            hasilcari++;
        }

    }

    if (hasilcari == 0){

        cout<<"DAta Tidak ditemukan"<<endl;
    } else {

        cout<<"Data " <<cari<<" Ditemukan di = "<<endl;

        for (int c = 0; c < lenght; c++){

            if (cari == angka[c]){

                cout<<"Index Ke - "<<c<<endl;
            }
        }
    }
}