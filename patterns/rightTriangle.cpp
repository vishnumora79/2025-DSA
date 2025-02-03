#include<bits/stdc++.h>

using namespace std;

void rightTriangle(int n)  {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void rightTriangleNumber(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

void revertRightTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "enter n:";
    cin >> n;

    // rightTriangle(n);
    // rightTriangleNumber(n);
    revertRightTriangle(n);
    return 0;
}