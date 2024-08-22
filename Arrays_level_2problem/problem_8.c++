//Reverse the given array without  using any extra space.

#include<iostream>
using namespace std;
int main(){
int a[5]={
    4,1,7,5,10
};

 int l=0;
    int r=4;
    while(l<r){
        int temp=a[l];
        a[l]=a[r];
        a[r]=temp;
        l++;
        r--;
    }

for (int i = 0; i < 5; i++)
{
    cout<<a[i]<<" ";
}

return 0;
}