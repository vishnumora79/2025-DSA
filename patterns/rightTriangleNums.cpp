#include<bits/stdc++.h>

using namespace std;

void pattern(int n) {
    int spaces = 2 * n - 2;
    for (int i = 1; i <= n; i++) {
    // numbers
    for (int j = 1; j <= i; j++) {
        cout << j;
    }

    // spaces
    for (int j = 0; j < spaces; j++) {
        cout << " ";
    }

        // numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
        spaces -= 2;
    }
}
int main() {
    int n;
    cout << "enter n:";
    cin >> n;
    pattern(n);
    return 0;
}