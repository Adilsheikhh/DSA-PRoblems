// Print Matrix
// Write a program to print a matrix;

#include<iostream>
using namespace std;
int main(){
  int a[3][4]={
    {1,2,3,4},
    {4,5,6,5 },
    {7,8,9,4},
  };
  cout<<"Matrix is"<<endl;
  for (int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;

  }

return 0;}