#include <iostream>
using namespace std;

int main(){
    int lenght; // variabel untuk menyimpan jumlah nomor handphone
    cout<<"Masukkan Jumlah Nomor Handphone = ";
    cin>>lenght;

    int nilai[lenght]; // array untuk menyimpan nomor handphone

    int temp; // variabel sementara untuk pertukaran nilai

    // Membaca nomor handphone dari pengguna dan menyimpannya dalam array
    for (int a = 0;  a < lenght; a++){
        cout<<"Masukkan No Handphone Ke - "<<a<<" = ";
        cin>>nilai[a];
    }

    // Algoritma Bubble Sort untuk mengurutkan nomor handphone secara ascending
    for (int b = 1; b < lenght; b++){
        for (int c = 0; c < lenght - b; c++){
            if (nilai[c] > nilai[c+1]){
                // Jika nomor handphone saat ini lebih besar dari nomor handphone berikutnya, lakukan pertukaran
                temp = nilai[c];
                nilai[c] = nilai[c+1];
                nilai[c+1] = temp;
            }
        }
        // Tampilkan hasil setiap iterasi untuk melihat proses pengurutan
        
        for (int e = 0; e < lenght; e++ ){
            cout<<nilai[e]<<" | ";
        }
        cout<<endl;
    }

    // Tampilkan nomor handphone setelah diurutkan secara ascending
    cout<<"Nomor Handphone Setelah Di Urutkan (Ascending) = "<<endl;
    for (int d = 0; d < lenght; d++){
        cout<<"   "<<nilai[d]<<endl;
    }
}
