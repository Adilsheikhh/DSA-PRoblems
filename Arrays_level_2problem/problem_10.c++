//matrix Addition
//given two matrices add them note matrices can be square  or rectangular but are of same size;

#include<iostream>
using namespace std;
int main(){
 int a[2][2]={
    {1,2},
    {3,4}}
 ;
 int b[2][2]={
    {1,2},
    {3,4}
 };
 int sum[2][2];

 for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        sum[i][j] = a[i][j] + b[i][j];
    }
 }
 cout<<"the matrix obtained by the aadddition of matrices is : "<<endl;
for(int i=0;i<2;i++){
    for (int j=0; j<2;j++){
 cout<<sum[i][j]<<"";
    }
cout<<endl<<"";
    
}

return 0;
}