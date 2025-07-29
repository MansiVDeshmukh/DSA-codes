// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int nums[2][3]={{1,4,9},{11,4,3}};
    int n=sizeof(nums)/sizeof(nums[0]);
    int m=sizeof(nums[0])/sizeof(nums[0][0]);
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<nums[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

