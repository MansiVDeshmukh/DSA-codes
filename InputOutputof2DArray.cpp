#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"ENter no of rows and columns of an array "<<endl;
    cin>>n>>m;
    int a[n][m]={};
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
