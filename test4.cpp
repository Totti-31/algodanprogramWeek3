#include<iostream>
using namespace std;
int main(int argc, char **argv) {
 cout<<"Jumlah parameter: "<<argc<<endl;
 char **argv2;
 argv2=argv;
 for (int i=0; i<argc; i++)
 cout<<"Par"<<i<<": "<<*argv2++<<endl;
}
