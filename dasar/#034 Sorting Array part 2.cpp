#include <iostream>
using namespace std;

int main(){

    int lenght;
    cout<<"Masukkan Jumlah Index = ";
    cin>>lenght;

    int nilai[lenght];
    
    int temp;

    for (int c = 0;  c < lenght; c++){

        cout<<"Masukkan Angka Ke - "<<c<<" = ";
        cin>>nilai[c];
    }

    for (int a = 1; a < lenght; a++){
        for (int b = 0; b < lenght - a; b++){

            if (nilai[b] > nilai[b+1]){

                temp = nilai[b];
                nilai[b] = nilai[b+1];
                nilai[b+1] = temp;
            }
        }
    for (int e = 0; e < lenght; e++ ){

            cout<<nilai[e]<<" | ";

        }
        cout<<endl;
    }
    cout<<"Hasil Sorting = "<<endl;
    for (int d = 0; d < lenght; d++){

        cout<<"   "<<nilai[d]<<endl;
    }
}