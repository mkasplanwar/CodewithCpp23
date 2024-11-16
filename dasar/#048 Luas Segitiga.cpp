#include <iostream>
using namespace std;

// L = 0.5 * a * t

double hitungl(double a, double t){
    double l = 0.5 * a * t;
    return l;

}

void tampill(double a, double t){
    double l = hitungl(a,t);
    
    cout <<"Luas Segitiga" <<endl;
    cout <<"L \t = 0.5 * a * t "<<endl;
    cout <<"L \t = 0.5 "<<a<<" * " <<t<<endl;
    cout <<"L \t = "<<l<<endl;
}

int main(){
    double a, t;
    string lanjut;

    do{
        system("cls");
        
    cout<<"Masukkan Alas = "; cin>>a;
    cout<<"Masukkan Tinggi = "; cin>>t;

    tampill(a,t);

    cout <<"Lanjut <Y/t>"; cin>>lanjut;

    }while(lanjut != "t");
    cout<<"Program Selesai"<<endl;
}