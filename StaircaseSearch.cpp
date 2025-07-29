// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    int key;
    cout<<"Enter key that you want to find"<<endl;
    cin>>key;
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(arr[0])/sizeof(arr[0][0]);
    int row=0,col=m-1;
    while(row<=n && col>=0){
        if(arr[row][col]==key){
            cout<<"key found at ("<<row<<","<<col<<")"<<endl;
            return 0;
        }
        else if(key<arr[0][m-1]){
            col--;//left
        }
        else if(key>arr[0][m-1]){
            row++;//down
        }
    }
    cout<<"Key not found "<<endl;
    return -1;
}
