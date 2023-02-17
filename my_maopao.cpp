#include <bits/stdc++.h>
using namespace std;
int main() {
    int tmp, arr[] = {7, 6, 5,4, 3, 2, 1};
    for (int i = 0; i < size(arr) - 1; ++i) {
        for (int j = i; j >= 0; --j) {
            if (arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (auto x: arr) {
        cout << x << ' ';
    }
    return 0;
}