#include <iostream>
using namespace std;

#define phi 3.14 // Mendefinisikan konstanta phi

double hitungl(double r){ // Fungsi untuk menghitung luas lingkaran
    double l = phi * r * r; return l;
}
double hitungk(double r){ // Fungsi untuk menghitung keliling lingkaran
    double k = phi * 2 * r; return k;
}
void tampill(double r){ // Fungsi untuk menampilkan luas lingkaran
    
    double l = hitungl(r); // Memanggil fungsi hitungl untuk menghitung luas

    cout<<"Luas Lingkaran"<<endl;
    cout<<"L \t = phi * r * r"<<endl;
    cout<<"L \t = "<<phi<<" * " <<r<< " * "<<r<<endl;
    cout<<"L \t = "<<l<<endl;
}
void tampilk(double r){ // Fungsi untuk menampilkan keliling lingkaran
    
    double k = hitungk(r); // Memanggil fungsi hitungk untuk menghitung keliling

    cout<<"Keliling Lingkaran"<<endl;
    cout<<"K \t = phi * 2 * r "<<endl;
    cout<<"K \t = "<<phi<<" * 2 * "<<r<<endl;
    cout<<"K \t = "<<k<<endl;

}
int main(){

    double r; // Variabel untuk menyimpan jari-jari lingkaran
    string lanjut; // Variabel untuk menentukan apakah pengguna ingin melanjutkan program atau tidak
    system("cls"); // Membersihkan layar

    do{
        system("cls"); // Membersihkan layar
        cout<<"Selamat datang \nDi Kalkulator Hitung Lingkaran\nBy Anwar"<<endl; // Pesan selamat datang
       
        cout<<"Masukkan R Lingkaran (cm) = "; cin>>r; // Meminta input jari-jari lingkaran dari pengguna

        tampilk(r); // Memanggil fungsi untuk menampilkan keliling lingkaran
        cout<<"--------------------"<<endl;
        tampill(r); // Memanggil fungsi untuk menampilkan luas lingkaran

        cout<<"Lanjut(y/t)"; cin>>lanjut; // Meminta input dari pengguna untuk melanjutkan atau tidak
    }while (lanjut != "t"); // Melakukan perulangan selama pengguna belum memilih untuk berhenti
    cout<<"Program Selesai"; // Pesan program selesai

}
