#include <iostream>
using namespace std;

int main(){

    /*
    Operator aritmatika

    + Penjumlahan
    - Pengurangan
    * Perkalian
    / Pembagian
    % Sisa Bagi
    
    */

   //Operator penjumlahan

   
   int a = 5;
   int b = 7;

   cout<<"Hasil penjumlahan "<< a <<" + " << b << " Adalah "<<a+b <<endl;

int c = 10;
int d = 20;
int hasil = c + d;

cout<<"Hasil Penjumlahan c + d adalah" <<hasil <<endl <<endl;


//Variabel sesuai apa yang kita imputkan

int e, f, hasil2;

cout<<"Variabel e =";
cin>>e;
cout<<"Variabel f =";
cin>>f;

hasil2 = e + f;

cout<<"Hasil penjumlahan " <<e<<" + "<<f<<" adalah " <<hasil2 <<endl;


//Operator Pengurangan

int sekarang, tahun_lahir, umur;

cout<<"Tahun sekarang =";
cin>>sekarang;
cout<<"Tahun lahir =";
cin>>tahun_lahir;

umur = sekarang - tahun_lahir;

cout<<"Sekarang Tahun " <<sekarang <<endl;
cout<<"Saya lahir di tahun "<<tahun_lahir <<endl;
cout<<"Usia saya adalah " <<umur<<" Tahun" <<endl <<endl;

//Operator Perkalian

int g, h, result;
cout<<"Masukkan Nilai G =";
cin>>g;
cout<<"Masukkan Nilai H =";
cin>>h;

result = g*h;

cout<<"Hasil Dari "<<g<<" * " <<h<<" adalah "<<result <<endl;

//Untuk Operator Pembagian sama dengan operator perkalian

//Operator Sisa Bagi

int i, hasil3;

cout<< 5 % 2 <<endl <<endl;

//Ganjil dan genap

cout<<"Masukkan Bilangan =";
cin>>i;

hasil3 = i % 2; 

string jenis = hasil3 ==1 ? "Ganjil" : "Genap";

cout<<"Bilangan "<<i<<" termasuk jenis " <<jenis <<endl;


}