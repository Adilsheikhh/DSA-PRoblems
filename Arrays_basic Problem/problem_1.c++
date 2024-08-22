//Given an arrays of integers ,find the sum of all its elements

#include<iostream>
using namespace std;
int main(){
int a[5]={
    4,1,7,5,10
};
int sum=0;
 for(int i=0;i<5;i++){
     sum= sum+a[i];
 }

cout<<"sum of all elements of array is" <<sum<<endl;

return 0;
}