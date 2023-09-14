#include<iostream>
using namespace std;
int main(int argc, char **argv) {
 cout<<"Jumlah parameter: "<<argc<<endl;
  for (int i=0; i<argc; i++)
 cout<<"Par"<<i<<": "<<argv[i]<< endl;
}
