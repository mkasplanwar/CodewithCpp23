#include <iostream>
using namespace std;

int main(){

    /*

    Menghitung Luas Segitiga

    L = (a * t)/2

    L = luas segitiga
    a = panjang segitiga
    t = tinggi segitiga

kita menggunakan double atau float, tapi double memiliki kapacitas decimal lebih besar
    */

double l, a, t;

cout<<"Menghitung luas segitiga \n===============================" <<endl;
cout<<"Masukkan alas \t\t=";
cin>>a;
cout<<"Masukkan tinggi \t=";
cin>>t;

l = (a*t)/2;

cout<<"Hasil luas segitiga yang diketahui : " <<endl;
cout<<"alas\t="<<a<<"cm"<<endl;
cout<<"tinggi\t="<<t<<"cm"<<endl;
cout<<"adalah :"<<endl <<endl;
cout<<"Luas = (a*b)/2 \nLuas = (" <<a<< " * " <<t<<"1/2)"<<endl;
cout<<"Luas = " <<l;




    
}