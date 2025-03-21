#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[150];
    int size;
    bool flag = true;

    cin.get(str, 150);
    size = strlen(str);

    while (flag) {
        int i = 0;
        flag = false;

        while (i < size) {
            int j = i;

            while (j + 1 < size && str[j+1] == str[i]) {
                j = j + 1;
            }

            if (i != j) {
                int length = j - i + 1;
                size = size - length;
                flag = true;

                for (int j = i; j <= size; j++) {
                    str[j] = str[j+length];
                }

                break;
            } else {
                i = i + 1;
            }
        }
    }

    cout << str << endl;

    return 0;
}
