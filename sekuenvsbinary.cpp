#include <iostream>
using namespace std;

// Pencarian Sekuensial 
int cari_sekuensial(int data[], int s, int cari) { 
    bool ketemu;
    int i = 0;
    ketemu = false;
    while ((i < s) && !(ketemu)) {
        ketemu = (data[i++] == cari);
    }
    if (ketemu) {
        return i;      
    } else {
        return -1 * i; 
    }
}

// Pencarian Binary
int cari_biner(int data[], int s, int cari) {
    int a, b, t, langkah;
    bool ketemu;
    a = 0;
    b = s - 1;
    langkah = 0;
    ketemu = false;
    do {
        t = (a + b) / 2;
        if (data[t] == cari) {
            ketemu = true;
        } else {
            if (data[t] > cari) {
                b = t - 1;
            } else {
                a = t + 1;
            }
        }
        langkah++;
    } while ((a <= b) && !(ketemu));
    return ketemu ? langkah : -1 * langkah;
}

int main() {
    const int N = 1000;
    int data[N];
    
    for (int i = 0; i < N; i++) {
        data[i] = i + 1;
    }
    
    cout << "Perbandingan Metode Pencarian: " << endl;
    
    cout << "Mencari data terkecil (1):\n";
    cout << "Sekuensial: " << cari_sekuensial(data, N, 1500) << " langkah\n";
    cout << "Binary    : " << cari_biner(data, N, 1500) << " langkah\n\n";
    
    cout << "Mencari data terbesar (1000):\n";
    cout << "Sekuensial: " << cari_sekuensial(data, N, 1000) << " langkah\n";
    cout << "Binary    : " << cari_biner(data, N, 1000) << " langkah\n\n";
    
    return 0;
}
