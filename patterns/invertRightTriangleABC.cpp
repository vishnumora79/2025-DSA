#include <bits/stdc++.h>

using namespace std;

void pattern1(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern2(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A' + i;
        for (char j = 0; j <= i; j++) {
            cout << ch;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "enter n:";
    cin >> n;
    // pattern1(n);
    pattern2(n);
    return 0;
}

