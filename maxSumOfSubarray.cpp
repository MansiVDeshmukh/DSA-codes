#include<iostream>
using namespace std;

void subArrayMax(int a[],int n){
    int maxSum=INT_MIN;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int currSum=0;
            for(int i=start;i<=end;i++){
                currSum+=a[i];
            }
            cout<<currSum<<",";
            /*maxSum=max(maxSum,currSum)*/
            if(maxSum<currSum){
                maxSum=currSum;
            }
        }
        cout<<endl;
    }
    cout<<"maxSum is:"<<maxSum<<endl;
}

int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    subArrayMax(a,n);
    return 0;
}
