#include <iostream>
using namespace std;

int main (){

    int z = 1;// jika tidak di incrementkan maka operasi tidak akan selesai

    while (z <= 10){

        cout<<z<<". Saya senang"<<endl;
        z++;
    }

    while (z <= 10){

        cout<<z<<". Saya senang"<<endl;
        z+=2;// untuk mendapatkan kelipatan ganjil
    }

    int awal, akhir;

    cout<<"Masukkan Nilai Awal = ";
    cin>>awal;
    cout<<"Masukkan Nilai Akhir = ";
    cin>>akhir;

    while (z <= akhir){

        cout<<z<<". Saya Senang" <<endl;
        z++;

    }



}