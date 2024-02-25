#include<iostream>
using namespace std;
int BinarySearch(int arr[],int target,int low,int high){
if(low>high){
  return -1;
}
int mid=(low+high)/2;
if(arr[mid]==target){
  return mid;
}else if(target>arr[mid]){
  BinarySearch(arr,target,mid+1,high);
}else{
  BinarySearch(arr,target,low,mid-1);
}
}
int main(){
int arr[8]={3,4,7,8,23,45,67,89};
int target=7;
int n=8;
int low=0;
int high=7;
int ans=BinarySearch(arr,target,low,high);
cout<<ans;
return 0;
}