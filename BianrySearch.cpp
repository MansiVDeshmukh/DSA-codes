#include<iostream>
using namespace std;

int binarySearch(int a[],int len,int key){
    int s=0;
    int l=len-1;
    while(s<=l){
        int mid=(s+l)/2;
        if(key==a[mid]){
            cout<<"key found at index ";
            return mid;
        }
        else if(key<a[mid]){
            l=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int a[]={2,4,6,8,10,12,14,16};
    int key;
    cout<<"Enter element that you want to find out: ";
    cin>>key;
    int len=sizeof(a)/sizeof(int);
    cout<<binarySearch(a,len,key)<<endl;
    return 0;
}
