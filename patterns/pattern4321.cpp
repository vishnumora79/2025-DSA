#include<bits/stdc++.h>

using namespace std;

void pattern(int n) {
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1;j++) {
            int top = i;
            int left = j;
            int right = (2 * n - 1) - j - 1;
            int bottom = (2 * n - 1) - i - 1;
            int ans = n - min(min(top, bottom), min(left, right));
            cout << ans << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "enter n:";
    cin >> n;

    pattern(n);
    return 0;
}