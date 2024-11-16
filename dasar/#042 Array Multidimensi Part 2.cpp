#include <iostream>
using namespace std;

int main(){

    int nomor [2][3] = {1, 4, 6, 2, 3, 5}; 
   
    for(int a = 0; a < 2; a++){
        for (int b = 0; b < 3; b++){

            cout<<nomor[a][b]<<" ";
        }
        cout <<endl;
    }
}