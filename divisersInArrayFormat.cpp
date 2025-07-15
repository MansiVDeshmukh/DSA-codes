#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout<<"Enter number whose divisor would you like to find out"<<endl;
    cin>>num;
    int a[100];
    int index=0;
    int n = sizeof(a) / sizeof(int);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            a[index]=i;
            index++;
        }
    }
    for(int i=0;i<index;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}

