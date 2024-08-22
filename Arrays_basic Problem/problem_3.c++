// sum all the even numbers in the array
#include<iostream>
using namespace std;
int main(){
int a[5]={
    4,1,7,5,10
};
int sum=0;
for(int i=0;i<5;i++){
    if(a[i]%2==0){
        //check if the element is even
       sum= sum+a[i];
    }
}
cout<<"sum of all even elements of array is" <<sum<<endl;
return 0;
}
