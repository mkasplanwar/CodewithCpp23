#include <iostream>
using namespace std;

    double hitungLpersegi(double s){

        double L = s*s;
        return L;
    }

    double hitungKpersegi(double s){

        double k = 4*s;
        return k;
    }

    void tampiluas(double s){

        double L = hitungLpersegi(s);

        cout <<"Luas = "<<endl;
        cout <<"L \t = s*s"<<endl;
        cout <<"L \t = "<<s<<" * "<<s<<endl;
        cout <<"L \t = "<<L<<endl;
    }
    void tampilkeliling(double s){

        double k = hitungKpersegi(s);

        cout <<"Keliling = "<<endl;
        cout <<"K \t = 4*s"<<endl;
        cout <<"K \t = "<<4<<" * "<<s<<endl;
        cout <<"K \t = "<<k<<endl;
    }

int main(){

    double s;
    string lanjut;
do{
    system("cls");
    cout<<"Masukkan Sisi = "; cin>>s;
    tampiluas(s);
    cout<<"\n========================"<<endl;
    tampilkeliling(s);

    cout<<endl;
    cout<<"Ulang <y/t>"; cin>>lanjut;
    }while (lanjut == "y");
    
    system("cls");
    cout<<"Program Selesai"<<endl;
}