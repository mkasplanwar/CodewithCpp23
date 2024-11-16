#include <iostream>
using namespace std;

int main (){

    int pil;
    string jkel;

    cout<<"pilih salah satu :" <<endl;
    cout<<"1. Laki Laki\n2. Perempuan" <<endl;

    cout<<"Pilihan :";
    cin>>pil;

    switch (pil){

        case 1 :
            jkel = "Laki Laki";

            break;

        case 2 :
            jkel = "Perempuan";

            break;

        defalt : 

            jkel = "Pilihan salah";

            break;

    }
cout<<"Jenis Kelamin saya adalah "<<jkel;
}