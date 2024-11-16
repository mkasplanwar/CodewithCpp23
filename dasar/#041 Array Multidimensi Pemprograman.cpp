#include <iostream>
using namespace std;

int main(){

    int angka[3];// array satu dimensi -> 0,1,2
    /*

        [0]
        [1]
        [2]
    
    */

    //array 2 dimensi(multidimensi)
    int nomor [2][3] = {1, 4, 6, 2, 3, 5}; 
    //jumlah index -> 2 * 3 -> 6
    /* 
    
    [baris][kolom] 
    [2][3] = 1 4 6
             2 3 5
    */
    
    /*
        [0][0] = 1
        [0][1] = 4
        [0][2] = 6

        [1][0] = 2
        [1][1] = 3
        [1][2] = 5
    */
   
   cout<<nomor[1][2];
}