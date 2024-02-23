#include<bits/stdc++.h>
using namespace std;
void binary(int arr[],int target,int n){
    int low=0,high=n-1;
    while(low<=high){
      int mid=(low+high)/2;
      if(arr[mid]==target){
        cout<<"Target found";
        break;
      }else if(target>arr[mid]){
        low=mid+1;
      }else{
        high=mid-1;
      }
    }
    cout<<"not found";
}
int main(){
int arr[8]={3,4,6,7,9,12,16,17};
int target=1;
binary(arr,target,8);
return 0;
}