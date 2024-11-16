#include <iostream>
using namespace std;

int main(){

    int x, y;
    bool kondisi;
    string hasil;

    x = 10;
    y = 10;

    //operasi == (senilai dengan)

    kondisi = x == y;
    hasil = kondisi == 1?"sama dengan":"tidak sama dengan";
    cout<<"Variabel x "<<hasil<< " Varibel y " <<endl <<endl;

    //Operator !=   - tidak sama dengan 

    kondisi = x != y;
    hasil = kondisi == 1?"tidak sama dengan":"sama dengan";
    cout<<"Variabel x "<<hasil<< " Variabel y " <<endl <<endl;

    //Operator >    - lebih dari

    kondisi = x > y;
    hasil = kondisi == 1? "Lebih dari":"Tidak lebih dari";
    cout<<"Variabel x "<<hasil<<" Variabel y " <<endl <<endl;

    //operator <    - kurang dari

    kondisi = x < y;
    hasil = kondisi ==1? "Kurang dari":"Tidak kurang dari";
    cout<<"Varibel x "<<hasil<<" Varibel y " <<endl <<endl;

    //Operator <=   - kurang dari sama dengan

    kondisi = x <= y;
    hasil = kondisi == 1? "kurang dari sama dengan" : "tidak kurang dari sama dengan";
    cout<<"variabel x "<<hasil<<"Varibel y " <<endl <<endl;

    //Operator >=   -lebih dari sama dengan

    kondisi = x >= y;
    hasil = kondisi == 1? "lebih dari sama dengan" : "Tidak lebih dari sama dengan";
    cout<<" Varibel x "<<hasil<<" Variabel y ";
    

}