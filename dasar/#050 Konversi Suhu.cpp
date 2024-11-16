#include <iostream>
using namespace std;

double hitungr(double c){
    double r = c * 4/5;

    return r;
}
double hitungk(double c){
    double k = c + 273;

    return k;
}
double hitungf(double c){
    double f = (c * 9/5) + 32;

    return f;
}

void tampil(double c){
    double r, k, f;
    r = hitungr(c); k = hitungk(c); f = hitungf(c);

    cout<<c<<" Derajat Celcius = "<<endl;
    cout<<r<<" Derajat Reamur"<<endl;
    cout<<k<<" Derajat Kelvin"<<endl;
    cout<<f<<" Derajat Fahreinheit"<<endl;
}

int main(){
    double c;
    string lanjut;

    do{
        system("cls");

    cout<<"konversi Suhu"<<endl;
    cout<<"Masukkan Suhu Celcius = "; cin>>c;

    tampil(c);

    cout<<"---------------"<<endl;
    cout<<"Lanjut (y/t)"; cin>>lanjut;

    }while(lanjut != "t");

    cout<<"program selesai";

}