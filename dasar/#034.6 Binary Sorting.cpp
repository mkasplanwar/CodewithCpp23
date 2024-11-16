#include <iostream>
using namespace std;

int main() {
    int data[5] = {1, 2, 3, 4, 5};
    int l, r, m, n;
    n = 5; 
    l = 0;
    r = n - 1;
    int ktm = 0;
    
    cout << "Masukkan Angka yang Anda Cari: "; cin >> m; 
    
    while (l <= r && ktm == 0) {
        m = l + (r - l) / 2; 
        if (data[m] == m) 
            ktm = 1;
        else if (m < data[m]) 
            r = m - 1; 
        else 
            l = m + 1; 
    }
    
    if (ktm == 1) 
        cout << "Data Ditemukan!" << endl;
    else 
        cout << "Data Tidak Ditemukan!" << endl;
    
    return 0;
}
