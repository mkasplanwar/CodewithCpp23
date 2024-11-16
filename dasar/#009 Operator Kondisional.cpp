#include <iostream>
using namespace std;

int main(){

    int a, b;
    bool hasil;
    a = 8; //angka yang diseleksi
    b = 7; //angka batas ambang

    hasil = a > b;//hasil seleksi kebenaran

    string kondisi = hasil == 1 ?"Lulus":"Tidak lulus";

    cout<<"Hasil = " <<kondisi <<endl <<endl;

    //Membedakan hasil ganjil atau genap 

    int c, result;
    
    cout<<"Masukkan bilangan  anda = ";
    cin>>c;

    result = c % 2;

    string condition = result == 1 ? " ganjil": "genap";
    cout<<"angka "<<c<<" adalah bilangan = " <<condition;


    

}