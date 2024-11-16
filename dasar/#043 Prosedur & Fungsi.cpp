#include <iostream>
using namespace std;

//Prosedur --> sub program -> Tidak memiliki nilai kembalian

void siswa (){

    string nama = "Alex";
    string jenis_kelamin = "Laki Laki";

    cout<<nama<<" Adalah Seorang " <<jenis_kelamin<<endl;
}

//Fungsi --> sub program -> memiliki nilai kembalian

string siswi(){
    string nama = "alexa";
    string jenis_kelamin = "Perempuan";

    return(nama+" Adalah Seorang" + jenis_kelamin);
}

int main(){

    siswa(); //penulisan prosedur 
    cout<<siswi(); //penulisan fungsi

}