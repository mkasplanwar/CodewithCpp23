#include <iostream>
using namespace std;

/*
    prosedur -> method
    fungsi --> method
 
 method ada yang memiliki parameter dan ada juga yang tidak 
*/

string siswa(string nama, string kelas){
    return (nama + " Adalah Siswa Kelas " + kelas);
}

int main(){

    string nama, kelas;

    cout <<"Nama = "; getline (cin, nama);
    cout <<"Kelas = "; getline (cin, kelas);

    cout<<siswa(nama, kelas);
}

/*
    void siswa(string nama, string kelas){
        cout <<nama <<" Adalah Siswa "<<kelas;

    }

    int main(){

        string nama, kelas;
        cout<<"Nama = "; getline (cin, nama);
        cout<<"Kelas = "; getline (cin, kelas);

        siswa(nama, kelas);
    }

*/