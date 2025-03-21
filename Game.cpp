#include <iostream>
using namespace std;

int main() {
    int n, k;
    int s = 0;

    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    for (int i = 1; i < n; i++) {
        int c = 0;

        while (c < k) {
            if (arr[s] > 0) {
                c = c + 1;

                if (c == k) {
                    arr[s] = -1;
                }
            }

            s = s + 1;
            if (s == n) {
                s = 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            cout << arr[i] << endl;
            break;
        }
    }

    return 0;
}
