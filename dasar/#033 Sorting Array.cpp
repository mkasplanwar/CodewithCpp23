#include <iostream>
using namespace std;

int main(){

    int nilai[] = {7, 3, 5, 10,1,6,7,9};
    int lenght = sizeof(nilai)/sizeof(*nilai);
    int temp;

    for (int a = 1; a < lenght; a++){
        for (int b = 0; b < lenght - a; b++){

            if (nilai[b] > nilai[b+1]){

                temp = nilai[b];
                nilai[b] = nilai[b+1];
                nilai[b+1] = temp;
            }
        }

        for (int c = 0; c < lenght; c++ ){

            cout<<nilai[c]<<" | ";

        }
        cout<<endl;
    }
    cout<<"Hasil Sorting = "<<endl;
    for (int d = 0; d < lenght; d++){

        cout<<"   "<<nilai[d]<<endl;
    }
}