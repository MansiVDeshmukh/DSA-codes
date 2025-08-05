#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    char a[] = "madam";
    int len = strlen(a);
    int start=0 ,end=len-1,reverse;
    bool isPalindrome=true;
    while(start<=end) {
        if(a[start]!=a[end]){
            isPalindrome=false;
            break;
        }
        start++;
        end--;
    }
    if(isPalindrome){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
    return 0;
}

