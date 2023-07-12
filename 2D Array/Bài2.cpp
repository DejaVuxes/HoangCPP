#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    int sum = 0;
    int a[n][m];
    //Nhập mảng
    for (int i = 0;i<n;i++){
        for (int j = 0; j<m;j++){
            cin >> a[i][j];
        }
    }
    // Xác định số chia hết cho 5 và Tính tổng
    for (int i = 0;i<n;i++){
        for (int j = 0; j<m;j++){
            if (a[i][j] % 5 == 0){
                sum = sum + a[i][j];
            }
        }
    }
    // Xuất tổng của mảng
    cout << sum; 
   
    return 0;
}