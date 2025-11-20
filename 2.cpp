#include <iostream>
#include <fstream>
using namespace std;

int cari_biner(int data[], int s, int cari){
	int a, b, t, langkah;
	bool ketemu;
	a = 0; b = s - 1;
	langkah = 0;
	ketemu = false;
	do {
		t = (a + b) / 2;
		if (data[t] == cari) {
			ketemu = true;
		}	
	else {
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

int main(){
	const int n= 1000;
	int data[n];
	
	for (int i = 0; i < n; i++){
		data [i] = i + 1;
	}
	
	int uji[10] = {10, 20, 30, 40 , 50, 60 , 70, 80 ,90, 100};
	cout << "hasil" << endl;
	for (int i = 0; i < 10; i++){
		int hasil = cari_biner(data, n, uji[i]);
		if (hasil > 0){
			cout << "Ditemukan" << endl;
 }else{
        cout << uji[i] << hasil << "Tidak ditemukan" << endl;
    }
  }
    int cari;
    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> cari;

    int hasil = cari_biner(data, n, cari);

    if (hasil > 0) {
        cout << "Hasil: Data ditemukan dalam " << hasil << " langkah" << endl;
    } else {
        cout << "Hasil: Data tidak ditemukan. Proses berlangsung " << -hasil << " langkah" << endl;
    }

    return 0;
}
