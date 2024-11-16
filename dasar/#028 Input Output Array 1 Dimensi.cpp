#include <iostream>
using namespace std;

int main(){
    int jumlarray;

    cout<<"Masukkan Jumlah Index = ";
    cin>>jumlarray;

    int angka[jumlarray];//harus mendeklarisakan kapasitas dari array
   // int jumlarray = sizeof(angka)/sizeof(*angka);

    cout<<jumlarray;

    for (int a = 0; a < jumlarray; a++){

        cout<<"Masukkan Nilai Index Ke - "<<a<<" = ";
        cin>>angka[a];

    }
   cout<<"===================================="<<endl;
   cout<<"Nilai Yang Tersimpan"<<endl;
   cout<<"===================================="<<endl;

   for (int b = 0; b < jumlarray; b++){

    cout<<"Index Ke - "<<b<<" = "<<angka[b]<<endl;
   }

}