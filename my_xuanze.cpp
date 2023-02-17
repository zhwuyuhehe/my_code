#include <bits/stdc++.h>
using namespace std;
int main(){
    int tmp,pos,arr[]={3,7,4,2,6,1};
    for (int i = 0; i < size(arr); ++i) {
        pos=i;
        for (int j = i+1; j < size(arr); ++j) {
            if (arr[pos]>arr[j]){
                pos=j;
            }
        }
        tmp=arr[pos];
        arr[pos]=arr[i];
        arr[i]=tmp;
    }
    for (auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}