#include <iostream>

// NAMESPACE

// namespace bil{
//     void cetak (int a){
//         std::cout<<a<<std::endl;

//     }
// }
// namespace huruf{
//     void cetak (std::string a){
//         std::cout<<a<<std::endl;
//     }
// }
// using namespace huruf;
// using namespace bil;
// int main(){
//     // bil::cetak(10)<<std::endl;
//     cetak("Haloooo");
//     cetak(5);
// }

// LIBRARY --> CPLUSPLUS.COM
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){

    double a = pow(2,2); //(angka, pangkat)
    double b = sqrt(81); //(angka yang mau di akarkan)

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<"======================"<<endl;

    for (int c = 0; c < 6; c++){

        cout<<rand()%50<<endl;

    }
}