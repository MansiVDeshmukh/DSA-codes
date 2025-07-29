// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int nums[3][3]={{1,4,9},{11,4,3},{2,2,3}};
    int n=sizeof(nums)/sizeof(nums[0]);
    int m=sizeof(nums[0])/sizeof(nums[0][0]);
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==1){
                sum+=nums[i][j];
            }
        }
    }
    cout<<"sum of 2nd row elements is:"<<sum<<endl;
    return 0;
}
