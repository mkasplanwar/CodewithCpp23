#include <iostream>
using namespace std;

int main(){
    int length; // variabel untuk menyimpan jumlah nomor handphone
    cout<<"Masukkan Jumlah Nomor Handphone = ";
    cin>>length;

    int nilai[length]; // array untuk menyimpan nomor handphone

    int temp;

    // Membaca nomor handphone dari pengguna dan menyimpannya dalam array
    for (int a = 0;  a < length; a++){
        cout<<"Masukkan No Handphone Ke - "<<a+1<<" = ";
        cin>>nilai[a];
    }

    // Algoritma Bubble Sort untuk mengurutkan nomor handphone secara descending
    for (int b = 0; b < length - 1; b++){
        for (int c = 0; c < length - b - 1; c++){
            if (nilai[c] < nilai[c+1]){ // Ubah tanda '>' menjadi '<' untuk descending
                // Jika nomor handphone saat ini lebih kecil dari nomor handphone berikutnya, lakukan pertukaran
                temp = nilai[c];
                nilai[c] = nilai[c+1];
                nilai[c+1] = temp;
            }
        }

        // Tampilkan hasil setiap iterasi untuk melihat proses pengurutan
        for (int e = 0; e < length; e++ ){
            cout<<nilai[e]<<" | ";
        }
        cout<<endl;
    }

    // Tampilkan nomor handphone setelah diurutkan secara descending
    cout<<"Nomor Handphone Setelah Di Urutkan (Descending) = "<<endl;
    for (int d = 0; d < length; d++){
        cout<<"   "<<nilai[d]<<endl;
    }
}
