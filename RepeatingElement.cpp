#include <bits/stdc++.h>
using namespace std;

string repeating(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                return "true"; // Duplicate found
            }
        }
    }
    return "false"; // No duplicates found after full check
}

int main() {
    int a[] = {1, 3, 6, 4};
    int n = sizeof(a) / sizeof(int);
    cout << repeating(a, n);
    return 0;
}

