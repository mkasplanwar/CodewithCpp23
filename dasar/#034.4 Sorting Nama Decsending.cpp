#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah nama: ";
    cin >> n;

    string nama[n];

    cout << "Masukkan " << n << " nama:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nama[i];
    }

    // Algoritma Bubble Sort untuk descending
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Bandingkan elemen ke-j dengan elemen ke-(j+1)
            if (nama[j] < nama[j + 1]) {
                // Tukar elemen jika elemen saat ini lebih kecil dari elemen berikutnya
                string temp = nama[j];
                nama[j] = nama[j + 1];
                nama[j + 1] = temp;
            }
        }
    }

    cout << "Nama setelah diurutkan secara descending:" << endl;
    for (int i = 0; i < n; i++) {
        cout << nama[i] << endl;
    }

    return 0;
}
