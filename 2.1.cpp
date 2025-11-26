#include <iostream>
using namespace std;

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

    int uji[10] = {10, 200, 500, 750, 999, -1, 1500, 1002, 2001, 123456};

    cout << "Hasil Eksperimen Pencarian Biner\n";
    cout << "---------------------------------\n";
    cout << "Nilai\tLangkah\tKeterangan\n";

    for (int i = 0; i < 10; i++) {
        int hasil = cari_biner(data, N, uji[i]);

        if (hasil > 0) {
            cout << uji[i] << "\t" << hasil << "\tDitemukan\n";
        } else {
            cout << uji[i] << "\t" << -hasil << "\tTidak ditemukan\n";
        }
    }

    return 0;
}


