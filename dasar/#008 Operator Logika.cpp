#include <iostream>
using namespace std;

int main(){

    bool output;

    output = 2 == 2;

    /*
    
    1 = benar
    0 = salah
    == : senilai

    Operator logika

    -not = Kebalikan - jika nilai true dan di berikan nilai not maka false
    contoh:

    output = 2 == 4;//0 false
    output = !( 2 == 4);
    ! = not

    */

output = not( 2 == 4); // 1 true
output = !(3 == 3); //0 false
    
//and (perkalian) - dia bernilai benar ketika semua kondisinya benar
// 1 and 1 - else 0
output = (2 < 4) and ( 2 > 1);//1 and 1 = 1 true
output = (2 < 4) and (2 < 2);//1 and 0 = 0 false
output = (2 > 1) and (2 > 1);//0 and 1 = 0 false
output = (2 < 1) and (2 > 3);//0 and 0 = 0 false

//or (Penumlahahan)
//dia bernilai salah ketika kedua kondisi nya salah

output = (2 < 4) or ( 2 > 1);//1 and 1 = 1 true
output = (2 < 4) or (2 < 2);//1 and 0 = 1 true
output = (2 > 1) or (2 > 1);//0 and 1 = 1 true
output = (2 < 1) or (2 > 3);//0 and 0 = 0 false

cout<<output;




    
}