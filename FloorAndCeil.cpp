#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[5]={10,20,30,40,50};
int x=41;
int low=0;
int high=4;
int ans=-1;
while(low<=high){
   int mid=(low+high)/2;
   if(arr[mid]<=x){
      ans=arr[mid];
      low=mid+1;
   }else{
      high=mid-1;
   }
}
cout<<ans;
return 0;
}