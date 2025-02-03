// #include<bits/stdc++.h>

// using namespace std;

// void equilatoralTriangle(int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n - i + 1; j++) {
//             cout << " ";
//         }

//         for (int j = 0; j < 2 * i + 1; j++) {
//             cout << "*";
//         }

//         for (int j = 0; j < n - i + 1; j++) {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// void revertEquilator(int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i; j++) {
//             cout << " ";
//         }
//         for (int j = 0; j < (2 * n - (2 * i + 1)); j++) {
//             cout << "*";
//         }
//         for (int j = 0; j < i; j++) {
//             cout << " ";
//         }
//         cout << "\n";
//     }
// }

// int main() {
//     int n;
//     cout << "enter n:";
//     cin >> n;

//     equilatoralTriangle(n);
//     revertEquilator(n);

//     return 0;
// }



// better version 

#include<bits/stdc++.h>

using namespace std;

void equilatoral(int n) {
    for (int i = 0; i < n; i++) {
        // spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }

        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

void revertEquilatoral(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        for (int j = 0; j < (2 * n - (2 * i + 1)); j++) {
            cout << "*";
        }

        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "enter n:";
    cin >> n;
    equilatoral(n);
    revertEquilatoral(n);

    return 0;
}