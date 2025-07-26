// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void selectionSort(int a[],int n){
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        int temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
    
    for(int i=0;i<=n-1;i++){
        cout<<a[i]<<endl;
    }
}

int main() {
    int a[]={13,46,24,52,20,9};
    int n=sizeof(a)/sizeof(int);
    selectionSort(a,n);
    return 0;
}
