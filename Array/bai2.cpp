#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n;
    int a[n];
    int check;

    for (int i = 0;i<n;i++)
        cin >> a[i];
    for (int i = 0;i<n-1;i++){
        for (int j = i;j<n;j++){
            if (a[j] <= a[i]){ 
                check = a[i];
                a[i] = a[j];
                a[j] = check;
            }
        }
    }
    for (int i = 0;i<n;i++)
        cout << a[i] << " ";
    return 0;
}