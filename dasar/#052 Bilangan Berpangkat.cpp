#include <iostream>
#include <cmath>
using namespace std;

// int main(){
//     double angka, pangkat;

//     cout<<"Angka: "; cin>>angka;
//     cout<<"Pangkat: "; cin>>pangkat;

//     cout<<"Hasil "<<angka<<" pangkat "<<pangkat<<endl;
//     cout<<"Adalah " <<pow(angka, pangkat)<<endl;

// }

    double hitungpangkat(double angka, double pangkat){
        return pow(angka, pangkat);
    }

    void tampilpangkat(double angka, double pangkat){
        cout<<"Hasil "<<angka<<" Pangkat "<<pangkat<<endl;
        cout<<"Adalah "<<hitungpangkat(angka, pangkat)<<endl;
    }

        int main(){

            string ulang;
            double angka, pangkat;

            do{
                system("cls");

            cout<<"Angka: "; cin>>angka;
            cout<<"pangkat: "; cin>>pangkat;

            tampilpangkat(angka, pangkat);

            cout<<"Ulang y/t"; cin>>ulang;

            }while(ulang == "y");

            system("cls");
            cout<<"Program Selesai";

            
        }




