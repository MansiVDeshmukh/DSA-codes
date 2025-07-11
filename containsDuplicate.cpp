
#include <iostream>
#include<cstring>
using namespace std;
string repeat(int a[],int len){
    for(int i=0;i<len;i++){
       for(int j=i+1;j<len;j++){
           if(a[i]==a[j]){
               return "true";
           }
       }
    }
       return "false";
}
int main() {
    int a[]={1,2,3,4,5};
    int len=sizeof(a)/sizeof(int);
    cout<<repeat(a,len)<<endl;
    return 0;
}
