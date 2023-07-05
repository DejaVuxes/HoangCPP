#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    int sum = 0;

    for (int i = 0;i<n;i++){
        cin >> a[i];
    }
    for (int i = 0;i<n;i++){
        int count = 0;
        for (int j = 1; j <=a[i]; j++){
            if (a[i]%j==0) count++;
        }
        if (count == 2) sum = sum + a[i];
    }
    cout << sum;
    return 0;
}