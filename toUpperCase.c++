#include <iostream>
#include <cstring>  
using namespace std;

int main() {
    char a[] = "ApPlE";
    int len = strlen(a); 
    for(int i = 0; i < len; i++) {
        int pos = (int)a[i];
        if(pos >= 97 && pos <= 122) {  
            a[i] = (char)(pos - 32);   
        }
        cout << a[i];       
    }
    return 0;
}

