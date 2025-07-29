// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a[4][4]={10,20,30,40,
                15,25,35,45,
                27,29,37,48,
                32,33,39,50
    };
    int key,n;
    cout<<"Enter key that you want to find"<<endl;
    cin>>key;
    n=sizeof(a)/sizeof(a[0]);
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(key==a[i][j]){
                cout<<"key:"<<key<<"found at("<<i<<","<<j<<")"<<endl;
                return 0;
            }
        }
    }
    cout<<"key not found"<<endl;
    return -1;
}
