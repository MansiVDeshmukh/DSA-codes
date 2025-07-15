#include<iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(int);

    cout << "All subarrays:\n";
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            // Print subarray from a[start] to a[end]
            for (int k = start; k <= end; k++) {
                cout << a[k];
            }
            cout << ",";
        }
        cout<<endl;
    }

    return 0;
}

