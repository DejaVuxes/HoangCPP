#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    int sum;
    for (int i = 0;i<n;i++){
        cin >> a[i];
    }
    for (int i = 0;i<n;i++){
        for (int j = i + 1; j <n; j++){
            if (a[i] + a[j] ==k){
                cout << a[i] << " "<< a[j];
                break;
            }
        }
    }
    return 0;
}