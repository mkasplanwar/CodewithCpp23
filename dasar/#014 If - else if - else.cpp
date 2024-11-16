#include <iostream>
using namespace std;

int main (){

    int pilihan;

    cout<<"Pilih Salah Satu\n1. Laki Laki\n2. Perempuan "<<endl;
    cout<<"Masukkan Pilihan = ";
    cin>>pilihan;

    // Percabangan Bertahap 

    if (pilihan == 1){

        cout<<"Jenis Kelamin Saya Adalah Laki Laki"<<endl;

    } else if (pilihan == 2) {

         cout<<"Jenis Kelamin Saya Adalah Perempuan" <<endl;

    } else {

        cout<<"Kelamin Anda Tidak Terdifinisi" <<endl;
    }
}