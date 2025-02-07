#include<bits/stdc++.h>

using namespace std;

void pattern (int n) {
    for (int i = 0; i < n; i++) {
        int breakPoint = (2 * i + 1) / 2;
        // spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // characters
        char ch = 'A';
        for (int j = 1; j <= 2 * i + 1; j++) {
            cout << ch;
            if( j<=breakPoint)
                ch++;
            else
                ch--;
        }
        // spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

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


