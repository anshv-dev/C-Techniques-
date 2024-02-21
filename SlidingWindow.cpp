//THIS IS THE SLIDING WINDOW TECHNIQUE

#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[5]={1,2,3,4,5};
int k=2;      //SIZE OF SUBARRAY     
int maxsum=0;
for(int i=0;i<k;i++){
  maxsum=maxsum+arr[i];
}
int currsum=maxsum;
for(int i=1;i<=5-k;i++){
   currsum=currsum-arr[i-1]+arr[i+k-1];
   maxsum=max(currsum,maxsum);
}
cout<<maxsum;
return 0;
}