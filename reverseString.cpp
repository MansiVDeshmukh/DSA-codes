#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    char a[] = "code";
    int len = strlen(a);
    int start=0 ,end=len-1,reverse;
    while(start<=end) {
        swap(a[start],a[end]);
        start++;
        end--;
    }
    cout<<a<<endl;
    return 0;
}

