#include <bits/stdc++.h>

using namespace std;

void pattern(int n) {
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = i;
        if(i > n)
            stars = 2 * n - i;
        // stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        cout << endl;
        if(i < n)
            spaces -= 2;
        else
            spaces += 2;
    }
}

int main() {
    int n;
    cout << "enter n:";
    cin >> n;
    pattern(n);
    return 0;
}