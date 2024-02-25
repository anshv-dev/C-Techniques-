#include<bits/stdc++.h>
using namespace std;

int main(){
int n=8;
int arr[n]={3,4,5,8,9,10,15,23};
int k=11;
int low=0;
int high=n-1;
int ans=n;
while(low<=high){
  int mid=(low+high)/2;
  if(arr[mid]>=k){
    ans=mid;
    high=mid-1;
  }else{
    low=mid+1;
  }
}
cout<<ans;
return 0;
}
//C++ STL
//In terms of Vector.
// lower_bound(arr.begin(),arr.end(),target)-arr.begin();

