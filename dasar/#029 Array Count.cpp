#include <iostream>
using namespace std;

int main(){

    int jumlitem;

    cout<<"Isikan Jumlah Item = ";
    cin>>jumlitem;

    int harga [jumlitem];
    jumlitem = sizeof(harga)/sizeof(*harga);
    int total = 0;

    for (int b = 0; b < jumlitem; b++){

        cout<<"Harga Item Ke - "<<b<<" = ";
        cin>>harga[b];
    }

    cout<<"====================================="<<endl;
    cout<<"Jumlah Item = "<<jumlitem<<endl;

   for ( int a = 0; a < jumlitem; a++){
        cout<<"item ke - "<<a<<" = Rp. "<<harga[a]<<endl;


        total += harga[a];
   }

   cout<<"==============================="<<endl; 
   cout<<"total harga = Rp. "<<total <<endl;
}