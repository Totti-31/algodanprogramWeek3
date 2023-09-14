#include <iostream>
using namespace std;
int main() {
 char Hobi[4][10]=
 {"Renang","Basket","Lukis","Musik"};
 char *pH[4];
 for (int i=0; i<4; i++)
 pH[i]=Hobi[i];
 for (int i=0; i<4; i++)
 printf("%s\n", pH[i]);
}

