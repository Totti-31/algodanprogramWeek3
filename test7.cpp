#include <iostream>
using namespace std;
int main () {
 int i, n;
 int *p;
 int jumlah=0;
 cout<<"Berapa angka yang ingin anda masukkan? ";
 cin >> i;
 p = new int[i];
 if (p == NULL
 6){
 cout<<"Error mengalokasi memori";
 }
 for (n=0; n<i; n++) {
 	 cout << "Masukan angka "<< n+1 << ": ";
 cin >> p[n];
 jumlah += p[n];
 }
 cout << "Anda memasukkan angka: ";
 for (n=0; n<i; n++)
 cout << p[n] << " ";
 cout << endl;
 cout << "Total: " << jumlah << endl;
 delete[] p;
}


