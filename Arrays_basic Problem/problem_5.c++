// find pairs with given sum in the array
// given an array of N integers, and a number K, find the number of pairs of elements in the array whose sum is equal to K.

#include<iostream>
using namespace std;
int main(){
int a[5]={
    4,1,3,2,0
};
int k= 5;
int count=0;
//pick the first element
for(int i=0;i<5;i++){
    //pick the second element
    for(int j=i+1;j<5;j++){
        if(a[i]+a[j]==k){
            count=count+1;
        }
    }
}
cout<<"count of pairs with given sum in the array is" <<count<<endl;
return 0;}
