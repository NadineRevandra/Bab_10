#include <iostream>
#include <fstream>
using namespace std;

int cari_sekuensial(int data[], int s, int cari){
	bool ketemu;
	int i = 0;
	
	ketemu = false;
	while ((i < s) && !(ketemu)) {
		ketemu = (data[i++] == cari);
	}
	
	if (ketemu){
		return i;
	} else {
		return -1 * i;
	}
}

int main(){
	int data[10];
	int n; 
	
	ifstream file("pencarian.txt");
	if(file){
	cout<<"File sukses dibuka!"<< endl;
	int i = 0;
	do{
		file << data[i];
		i++;
	}while(file){
		n = i;
		
		file.close();
	}else{
		cout<<"File gagal dibuka!"<< endl;
		return 1;
	}
	int cari;
	cout << "Masukkan bilangan yang dicari: ";
	cin >> cari;
	
	int cari_sekuensial()
	}
}
