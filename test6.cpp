#include<iostream>
using namespace std;
int main(){
int *pArr;
pArr = new int[4];
pArr[0]=11;
pArr[1]=12;
pArr[2]=13;
pArr[3]=14;
for(int i=0;i<4;i++)
printf("%3d ",pArr[i]);
delete []pArr;
}
