/*
Untuk ujian nasional ada 3 mata pelajaran yang diujikan yaitu Bahasa Indonesia, Bahasa Inggris dan Matematika.
Jumlah siswa tidak diketahui.
Buatlah larik 2 dimensi untuk menampung ketiga nilai dari sejumlah siswa.
Jumlah siswa akan ditentukan saat program dijalankan.
Tampilkan masukan nilai dari pengguna, beserta rata-rata dari tiap siswa.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "======================================================================================================\n\n";
    cout << "catatan:\nGunakan enter untuk menambah nilai berikutnya\n\n";
    cout << "======================================================================================================\n\n";
	int jumlahSiswa;
    cout << "Masukkan jumlah siswa: ";
    cin >> jumlahSiswa;
    cout << "\n======================================================================================================\n\n";
    // Alokasi memori untuk larik 2 dimensi nilai
    int **nilai = new int *[jumlahSiswa];

    for (int x = 0; x < jumlahSiswa; x++) {
        nilai[x] = new int[3]; // Tiga mata pelajaran: Bahasa Indonesia, Bahasa Inggris, Matematika
        
        cout << "Masukkan nilai untuk siswa " << x + 1 << " \n(Bahasa Indonesia, Bahasa Inggris, Matematika):\n";
        cin >> nilai[x][0] >> nilai[x][1] >> nilai[x][2];
        cout << "\n======================================================================================================\n\n";
    }

    // Menampilkan masukan nilai dari pengguna
    cout << "Keseluruhan nilai siswa :" << endl;
    for (int x = 0; x < jumlahSiswa; x++) {
        cout << "Siswa ke-" << x + 1 << ": ";
        cout << nilai[x][0] << " " << nilai[x][1] << " " << nilai[x][2] << endl;
    }

    // Menghitung dan menampilkan rata-rata tiap siswa
    cout << "\n======================================================================================================\n\n";
	cout << "Rata-rata nilai tiap siswa:" << endl;
    for (int x = 0; x < jumlahSiswa; x++) {
        double rataRata = (nilai[x][0] + nilai[x][1] + nilai[x][2]) / 3.0;
        cout << "Siswa " << x + 1 << ": " << fixed << setprecision(2) << rataRata << endl; 
    }

    // Membebaskan memori yang dialokasikan
    for (int x = 0; x < jumlahSiswa; x++) {
        delete[] nilai[x];
    }
    delete[] nilai;
    return 0;
}
