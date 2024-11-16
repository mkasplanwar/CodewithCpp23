#include <iostream>
using namespace std;

int main(){

    int jmlindex, max, min, nilai;
    cout<<"Banyak Data = ";
    cin>>jmlindex;

    for (int a = 1; a <= jmlindex; a++){

        cout<<"Masukkan Data Ke - "<<a<<" = ";
        cin>>nilai;

        if (a == 1){

            max =nilai;
            min = nilai;

        } else {
        if (nilai > max){

            max = nilai;
        }
        if (nilai < min){

            min = nilai;
        }
        }
    }
    cout<<"Nilai Maksimal = "<<max<<endl;
    cout<<"Nilai Minimal = "<<min<<endl;

}