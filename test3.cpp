#include<iostream>
using namespace std;
int main() {
int Nilai = 85;
int *pB;
int **pA;
pB = &Nilai;
pA = &pB;
cout<<"Isi Nilai via pB = "<<*pB<<endl;
cout<<"Isi Nilai via pA = "<<**pA<<endl;
}
