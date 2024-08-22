//ReVerse an array-Part 1
// given an array of n integers ,reverse the array can use extra space if needed;
#include<iostream>
using namespace std;
int main(){
int a[5]={
    4,1,7,5,10
};
int b[5];

int j=0;

for(int i=4;i>=0;i--){
    b[j]=a[i];
    j=j+1;
}
for(int i=0;i<5;i++){
    cout<<b[i]<<" ";
}
return 0;}