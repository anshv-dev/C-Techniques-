#include<iostream>
using namespace std;

int main(){
int n=8;
int arr[n]={3,4,5,7,8,12,22,33};
int target=22;
int low=0;
int high=n-1;
int ans=n;
while(low<=high){
  int mid=(low+high)/2;
  if(arr[mid]>target){
    ans=mid;
    high=mid-1;
  }else{
    low=mid+1;
  }
}
cout<<ans;
return 0;
}

//C++  STL
//In terms of Vectors
//upper_bound(arr.begin(),arr.end(),target)-arr.begin();