// Given an arrays of integers ,find the count of even  elements in it

#include<iostream>
using namespace std;
int main(){
int a[5]={
    4,1,7,5,10
};
int count=0;
for(int i=0;i<5;i++){
    if(a[i]%2==0){
        //check if the element is even
       count= count+1;
    }
}

cout<<"count of even elements of array is" <<count<<endl;
return 0;
}