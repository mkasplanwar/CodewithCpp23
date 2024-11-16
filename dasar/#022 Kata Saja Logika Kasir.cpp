#include <iostream>
using namespace std;

int main (){

    int roti, susu, sampo, total;
    int jumlahroti, jumlahsusu, jumlahsampo;

    roti = 5000;
    susu = 4000;
    sampo = 500;

    cout<<"Item yang tersedia \n ==============================" <<endl;
    cout<<"Roti \t = "<<roti<<" \t/pcs" <<endl;
    cout<<"Susu \t = " <<susu<<" \t/pcs "  <<endl;
    cout<<"Sampo \t = " <<sampo<<" \t/pcs" <<endl;

    cout<<"============================" <<endl;

    cout<<"Masukkan Jumlah Roti\t = ";
    cin>>jumlahroti;
    cout<<"Masukkan Jumlah Susu\t = ";
    cin>>jumlahsusu;
    cout<<"Masukkan Jumalh Sampo\t = ";
    cin>>jumlahsampo;

    cout<<"===========================" <<endl;
    cout<<"Harga Total Roti = "<<roti*jumlahroti <<endl;
    cout<<"Harga Total Susu = "<<susu*jumlahsusu <<endl;
    cout<<"Harga Total Sampo = " <<sampo * jumlahsampo <<endl;

    cout<<"========================="<<endl;

    total = (roti*jumlahroti)+ (susu * jumlahsusu) + (sampo * jumlahsampo);
    cout<<"Total Belanja = "<<total<<endl;


}