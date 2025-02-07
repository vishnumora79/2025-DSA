#include<bits/stdc++.h>

using namespace std;

void pattern (int n) {
    int spaces = 0;
    for (int i = 0; i < n; i++) {
    // stars
    for (int j = 1; j <= n - i; j++) {
        cout << "*";
    }
    // spaces
    for (int j = 0; j < spaces; j++) {
        cout << " ";
    }
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
        spaces += 2;
    }

    spaces = 2 * n - 2;
    for (int i = 0; i < n; i++) {
        // stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
            // stars
            for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }
            spaces -= 2;
            cout << endl;
    }
}
int main () {
    int n;
    cout << "enter n:";
    cin >> n;
    pattern(n);
    return 0;
}