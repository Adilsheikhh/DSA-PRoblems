// find  the maximum element in the array

#include<iostream>
using namespace std;
int main(){
 
 int a[5]={
    1,4,7,9,11
 };
     int max = a[0];
    for(int i=0; i<5; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
cout<<"max element of array is" <<max<<endl;


return 0;
}