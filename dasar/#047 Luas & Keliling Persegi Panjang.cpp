#include <iostream>
using namespace std;

double hitungl(double p, double l){

    double luas = p * l;
    return luas;
    
}

double hitungk (double p, double l){

    double keliling = 2 * (p + l);
    return keliling;
}

void tampilL(double p, double l){
    double luas = hitungl(p,l);
    cout<<"LUAS = "<<endl;
    cout<<" L \t = p * l" <<endl;
    cout<<" L \t = "<<p<<" * "<<l<<endl;
    cout<<" L \t = "<<luas<<endl;

}
void tampilK (double p, double l){
    double keliling = hitungk(p,l);
    cout<<"KELILING = "<<endl;
    cout<<"K \t = 2 * (p+l) "<<endl;
    cout<<"K \t = "<<2<<" * (" <<p<<" + "<<l<<" )"<<endl;
    cout<<"K \t = "<<keliling<<endl;
}
int main(){

    double p,l;
    string lanjut;

    do{
        system ("cls");
    cout<<"Masukkan p = "; cin>>p;
    cout<<"Masukkan l = "; cin>>l;

    tampilL(p,l);
    cout<<"--------------------------"<<endl;
    tampilK(p,l);

    cout<<"ulang <y/t>";cin>>lanjut;

}while (lanjut != "t");
cout <<"Program Selesai"<<endl;
}