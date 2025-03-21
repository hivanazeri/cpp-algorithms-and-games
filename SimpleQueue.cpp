#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int queue[n];
    int front = 0, rear = 0;
    string cmd;
    int value;

    for (int i = 1; i <= n; i++) {
        cin >> cmd;

        if (cmd == "push") {
            cin >> value;
            queue[rear++] = value;
        } else {
            cout << queue[front++] << endl;;
        }
    }

    return 0;
}
