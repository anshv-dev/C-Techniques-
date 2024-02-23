#include<iostream>
using namespace std;

int main(){
int arr[6]={1,2,3,4,5,6};
int k=5;
int i=0;
int j=5;
while(i<j){
     if(arr[i]+arr[j]==k){
      cout<<i+1<<" "<<j+1;
      break;
     }else if(arr[i]+arr[j]>k){
      j--;
     }else{
      i++;
     }
}
return 0;
}