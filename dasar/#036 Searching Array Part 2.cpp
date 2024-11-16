#include <iostream>
using namespace std;

int main(){

    string buah[] = {"mangga","jeruk","anggur","apel", "mangga"};
    int lenght = sizeof(buah)/sizeof(*buah);

    string cari;
    int hasilcari;

    cout<<"Data Tersedia = " <<endl;
    
    for (int a = 0; a < lenght; a++){

        cout<<"Index Ke - "<<a<<" = "<<buah[a]<<endl;

    }
cout<<"Data Yang DIcari = ";
cin>>cari;

for (int b = 0; b < lenght; b++){

   if (cari == buah[b]){

    hasilcari++;
   } 
}

if (hasilcari == 0){

    cout<<"Data Tidak Di Temukan"<<endl;

} else {

    cout<<" Data "<<cari<<" Di Temukan" <<endl;


}

for (int c = 0; c < lenght; c++){

    if (cari == buah[c]){

        cout<<"Di Index Ke - "<<c<<endl;
    }
    }

   
}
