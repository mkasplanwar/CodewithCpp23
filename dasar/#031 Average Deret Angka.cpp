#include <iostream>
using namespace std;

int main(){

    //without array

    float jumlahnilai, nilai, total, rata;
    total = 0;
    cout<<"Jumlah Data = ";
    cin>>jumlahnilai;

    for (int a = 0; a < jumlahnilai; a++){

        cout<<"Masukkan Data Ke - "<<a<<" = ";
        cin>>nilai;

        total += nilai;
    }

    cout<<"Total Nilai = "<<total <<endl;;
    rata = total / jumlahnilai;

    cout<<"Rata Rata = "<<rata<<endl; 

}