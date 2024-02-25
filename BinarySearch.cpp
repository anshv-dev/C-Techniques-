#include<iostream>
using namespace std;

int main(){
  int n=8;
int arr[n]={3,4,5,8,9,10,12,15};
int target=9;
int low=0;
int high=n-1;
while(low<=high){
  int mid=(low+high)/2;
  if(arr[mid]==target){
    cout<<"Target found"<<" "<<mid;
    break;
  }else if(target>arr[mid]){
    low=mid+1;
  }else{
    high=mid-1;
  }
}
return 0;
}

// Overflow Cases=> mid=low+((high-low)/2) if search space is int max.