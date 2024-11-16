#include <iostream>
using namespace std;

int main(){

    int max = 5;
    int top = -1;
    string keranjang[max];
    string lanjut;

    do {

        system ("cls");
        if (top == max - 1){
            cout<<"Keranjang Penuh"<<endl;

        }else{
            top++;
            cout<<"Masukkan Isi: ";
            cin>>keranjang[top];
            
            cout<<"data "<<keranjang[top]<<"Berhasil";
            cout<<" ditabahkan"<<endl;

        }

        cout<<"=========================================="<<endl;
        cout<<"Isi Keranjang Saat Ini: "<<endl;

        for (int a = 0; a <= top; a++){
            cout<<a+1<<". "<<keranjang[a]<<endl;
        }

        cout<<"Lanjutkan Program <y/t> : ";
        cin>>lanjut;
    }while (lanjut == "y");
    cout<<"Program Selesai";
    
}