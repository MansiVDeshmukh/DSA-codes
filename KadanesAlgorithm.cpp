#include<bits/stdc++.h>
using namespace std;

void maxSubArraySum(int a[],int n){
    int maxSum=INT_MIN;
    int Sum=0;
    for(int i=0;i<n;i++){
        Sum+=a[i];
        maxSum=max(maxSum,Sum);
        if(Sum<0){
            Sum=0;
        }
    }
    cout<<"max sum of array is: "<<maxSum<<endl;
}
int main(){
    int a[]={2,-3,6,-5,4,2};
    int n=sizeof(a)/sizeof(int);
    maxSubArraySum(a,n); 
    return 0;
}
