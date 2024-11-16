#include <iostream>
using namespace std;

int main (){

    int biaya, total;

    cout<<"Pengularan Anda = ";
    cin>>biaya;

    if (biaya > 10){

        total = biaya - 2;
        cout<<"Anda mendapatkan potongan" <<endl;
       

    } else {

        total = biaya;
        cout<<"Anda tidak mendapat potongan"<<endl;
    }
     cout<<"biaya awal = "<<biaya <<endl;
     cout<<"Total = "<<total <<endl <<endl;

    int a;

    cout<<"Masukkan angka = ";
    cin>>a;

    if (a % 2 == 1){

        cout<<"Angka variabel "<<a<<"Adalah Bilangan Ganjil" <<endl;
    } else {

        cout<<"Angka Varibel "<<a<<" Adalah Bilangan genap";
    }

}