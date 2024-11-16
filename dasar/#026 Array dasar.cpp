#include <iostream>
using namespace std;

int main (){

    //array adalah tipe data yang dapat menampung beberapa value

    /*

    value 1
    array 1 2 3 4 5 
    index 0 1 2 3 4
    
    */
   //cara pertama
   int nilai[3] = { 68, 89, 75};
   cout<<nilai[0];

   //cara kedua

   int nilai [4];

   nilai [0] = 1;
   nilai [1] = 2;
   nilai [2] = 3;
   nilai [3] = 4;

   cout<<"Tampilkan nilai dengan index ke berapa = ";
   cin>>nilai[1];

   cout<<"Nilai Dari index adalah = "<<nilai [1];

}
