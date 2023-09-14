/*
Buatlah program membuat larik 2 dimensi tipe data char untuk menyimpan nama dengan pengalokasian memori secara dinamis.
Masing-masing nama memiliki panjang maksimum 30 huruf. 
Masukan dari pengguna adalah jumlah orang, danprogram akan mengalokasi sejumlah nama untuk masing-masing orang. 
Kemudian minta pengguna memasukkan nama satu per satu. 
Akhir program akan menampilkan semua nama yang dimasukkan pengguna.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "======================================================================================================\n\n";
    int jumlahOrang;
    cout << "Berapa orang yang ingin di-input? => ";
    cin >> jumlahOrang;
    cout << "\n======================================================================================================\n\n";

    char **nama = new char *[jumlahOrang];
    
    for (int i = 0; i < jumlahOrang; i++) {
        nama[i] = new char[31]; // Panjang maksimum nama + 1 (untuk karakter null-terminator)
        
        cout << "Masukkan nama orang ke-" << i + 1 << ": ";
        cin >> nama[i];
    }
	cout << "\n======================================================================================================\n\n";
    // Menampilkan semua nama yang di-input
    cout << "Nama yang sudah di-input :" << endl;
    for (int i = 0; i < jumlahOrang; i++) {
        cout << "Orang ke-" << i + 1 << ": " << nama[i] << endl;
    }

    // Melepas memori yang dialokasikan
    for (int i = 0; i < jumlahOrang; i++) {
        delete[] nama[i];
    }
    delete[] nama;

}

