#include <iostream>
using namespace std;

int main(){

    int max = 5;
    int top = -1;
    string keranjang[max];
    string lanjut;
    int pilihan, no_index;

    do {

        cout<<"Pilihan \n1. Tambah \n2. Ubah \n3. Selesai"<<endl;
        cout<<"pilihan = ";
        cin>>pilihan;

        system ("cls");
        switch(pilihan){

            case 1: 

            if (top == max - 1){
            cout<<"Keranjang Penuh"<<endl;

                }else{
                    top++;
                    cout<<"Masukkan Isi: ";
                    cin>>keranjang[top];
                    
                    cout<<"data "<<keranjang[top]<<" berhasil";
                    cout<<" ditambahkan"<<endl;

                }
            break;
            case 2: 
                cout<<"No Data yang di ubah = ";
                cin>>no_index;

                cout<<"index awal ="<<keranjang[no_index-1]<<endl;
                cout<<"Index Baru = ";
                cin>>keranjang[no_index-1];
            break;
            case 3:
                pilihan = 3;
            break;
            default:
                cout<<"Pilihan Anda Salah"<<endl;
            break;
        }

        cout<<"=========================================="<<endl;
        cout<<"Isi Keranjang Saat Ini: "<<endl;

        for (int a = 0; a <= top; a++){
            cout<<a+1<<". "<<keranjang[a]<<endl;
        }
    
         cout<<"=========================================="<<endl;
    }while (pilihan != 3);
    cout<<"Program Selesai";
    
}