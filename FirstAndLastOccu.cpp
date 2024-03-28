// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
        // int l=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
//         int u=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
//         if(l==nums.size() || nums[l]!=target){
//             return {-1,-1};
//         }
//         return {l,u-1};

//     }
// };
int FirstBinary(int arr[],int n,int target){
  int low=0;
  int high=n-1;
  int first=-1;
  while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==target){
      first=mid;
      high=mid-1;
    }else if(arr[mid]<target){
      low=mid+1;
    }else{
      high=mid-1;
    }
  }
  return first;
}

int LastBinary(int arr[],int n,int target){
  int low=0;int high=n-1;
  int last=-1;
  while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==target){
      last=mid;
      low=mid+1;
    }else if(arr[mid]<target){
        low=mid+1;
    }else{
      high=mid-1;
    }
  }
  return last;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
int n=8;
int arr[n]={1,2,2,4,8,9,11,13};
int target=2;
int first_occur=FirstBinary(arr,n,target);
int last_occur=LastBinary(arr,n,target);
if(first_occur==-1){
   cout<<-1<<" "<<-1;
}else{
cout<<first_occur<<" "<<last_occur;
}

return 0;
}