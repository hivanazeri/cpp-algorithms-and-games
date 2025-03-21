#include <iostream>
using namespace std;

/*
    time complexity of code is n^2 because solve algorithm has two for loop
    that first loop repeat n time and second loop repeat as same as first loop
*/

int main() {
    int n;
    cin >> n;

    n = n / 2;

    int arr[n+1];

    arr[0] = 1;
    arr[1] = 1;

    for (int i = 2; i <= n; i++) {
        arr[i] = 0;

        for (int j = 0; j < i; j++) {
            arr[i] += arr[j] * arr[i-j-1];
        }
    }

    cout << arr[n] << endl;

    return 0;
}
