#include <iostream>
using namespace std;

int main(){
    
    int jumlahindex;

    cout<<"Masukkan Jumlah Data = ";
    cin>>jumlahindex;

    float nilai[jumlahindex], total, rerata;
    total = 0;

    for (int a = 0; a < jumlahindex; a++){

        cout<<"Data Ke - "<<a<<" = ";
        cin>>nilai[a];

        total += nilai[a];
    }

    cout<<"total nilai = "<<total<<endl;
    rerata = total/jumlahindex;
    cout<<"Rata Rata = "<<rerata<<endl;
}