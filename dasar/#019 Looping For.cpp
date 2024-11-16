#include <iostream>
using namespace std;

int main(){

    /*

    Paarmeter
    
    */

    for ( int a = 1; a <= 10; a++){//untuk kondisi () mempunya tiga parameter

        cout<<"Saya senang" <<endl;

    }

    for ( int a = 1; a <= 10; a++){//untuk kondisi () mempunya tiga parameter

        cout<<a<<". Saya senang" <<endl;

    }

    //membuat untuk inputan user

    int awal, akhir;//awal increment dan akhir increment

    cout<<"Mulai berapa = ";
    cin>>awal;
    
    cout<<"Sampai berapa = ";
    cin>>akhir;

    for ( int a = awal; a <= akhir; a++){

        cout<<a<<". Saya senang" <<endl;
        
    }




}