#include <bits/stdc++.h>
using namespace std;
int main() {
    int j, key, arr[] = {3, 6, 7,4, 2, 1, 5};
    for (int i = 1; i < size(arr); ++i) {
        j = i;
        key = arr[i];
        while (arr[j - 1] > key) {
            arr[j] = arr[j - 1];
            if (--j == 0) {
                break;
            }
        }
        arr[j] = key;
    }
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}