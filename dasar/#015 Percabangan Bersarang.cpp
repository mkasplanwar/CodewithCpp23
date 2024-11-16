#include <iostream>
using namespace std;

int main(){

    int pilihan, umur;
    string jkel, status, kegiatan;
    cout<<"Pilih Salah Satu (1/2) "<<endl;
    cout<<"1. laki Laki\n2. Perempuan"<<endl;

    cout<<"Pilihan :";
    cin>>pilihan;
    cout<<"Umur anda (Th) = ";
    cin>>umur;

    if (pilihan == 1){

        jkel = "Laki Laki";

        if (umur >= 27){

            status = "Sudah waktunya";
            kegiatan = "Cari Jodoh";
        } else {

            status =  "Belum Waktunya";
            kegiatan = "Tingkatkan Kualitas Diri";
        }

    } else if (pilihan == 2){

        jkel = "Perempuan";

        if (umur >= 24){

            status = "Sudah waktunya";
            kegiatan = "Cari Jodoh";
        } else {

            status =  "Belum Waktunya";
            kegiatan = "Tingkatkan Kualitas Diri";
        } 

    } else {

        jkel = "Anonymous";
        status = "Anonymous";
        kegiatan = "Anonymous";
    }
    cout<<"-------------------------------------" <<endl;
    cout<<"Anda adalah "<<jkel<<" berumur " <<umur<<" Tahun"<<endl;
    cout<<status<<" Menikah Boss!!"<<endl;
    cout<<"Silahkan"<<kegiatan<<" !"<<endl;
}