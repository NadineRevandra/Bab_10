#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int cari_sekuensial(int data[], int s, int cari) {
    bool ketemu = false;
    int i = 0;
    while ((i < s) && !(ketemu)) {
        ketemu = (data[i++] == cari);
    }
    return ketemu ? i : -1 * i;
}

int main() {
    srand(time(0));
    int n = 1000;
    int data[1000];


    for(int i=0; i<n; i++) data[i] = rand() % 2000;

    int target[10] = {data[0], data[500], data[999], data[100], data[750], -1, 5000, -50, 2500, 9999};

    cout << "----Data Acak----\nTarget\tLangkah\n";
    for(int k=0; k<10; k++) {
        int hasil = cari_sekuensial(data, n, target[k]);
        cout << target[k] << "\t" << (hasil > 0 ? hasil : -hasil) << endl;
    }

    sort(data, data + n);

    cout << "\n----Data Urut----\nTarget\tLangkah\n";
    for(int k=0; k<10; k++) {
        int hasil = cari_sekuensial(data, n, target[k]);
        cout << target[k] << "\t" << (hasil > 0 ? hasil : -hasil) << endl;
    }

    return 0;
}