#include <iostream>
using namespace std;

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

int main(){
    int n;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    int data[n];

    cout << "Masukkan isi data:\n";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
  
    int cari;
        cout << "Masukkan angka yg dicari: ";
        cin >> cari;

    // fungsi pencarian
    int hasil = cari_sekuensial(data, 5, cari);
    cout << "Ketemu di langkah: " << hasil << endl; 

    return 0;
}

// input: masukkan angka yg dicari...
// ouput: ketemu di langkah...
