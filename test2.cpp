#include <iostream>
#define JML_MHS 10 //Banyaknya Mahasiswa
#define JML_MK 5 //Jumlah Mata Kuliah
using namespace std;
int main(void) {
 // deklarasi variabel dan pointernya
 // nama variabel dengan tanda * adalah pointer
 int i,k;
 char *pNIM[JML_MHS], NIM[JML_MHS][15];
 int *pNilai[JML_MHS],NILAI[JML_MHS][JML_MK];
 FILE *pF; // pointer untuk file
 // Mengisi pointer dengan alamat NIM dan NILAI
 for(i=0; i<JML_MHS; i++) {
 pNIM[i]=NIM[i];
 pNilai[i]=NILAI[i];
 }
 // membuka file
 if((pF=fopen("F:\\totti\\kuliah\\Matkul\\semester 3\\algoritma & pemrograman 2\\pert3data.txt","r")) ==NULL) {
 printf("File tidak dapat dibuka\n");
 return(0);
 }
 // membaca file
 for(i=0; i<JML_MHS; i++) {
 fscanf(pF, "%s", NIM[i]);
 for(k=0; k<JML_MK; k++)
 fscanf(pF,"%d",&NILAI[i][k]);
 }
 // menampilkan isi file dengan pointer
 for(i=0; i<JML_MHS; i++) {
 printf("%10s ", pNIM[i]);
 for(k=0; k<JML_MK; k++)
 printf("%02d ",*pNilai[i]++);
 printf("\n");
 }
 // menutup file
 fclose(pF);
}

