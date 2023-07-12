#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    int sum, k;
    int max = 0; 
    int a[n][m];
    //Nhập mảng
    for (int i = 0;i<n;i++){
        for (int j = 0; j<m;j++){
            cin >> a[i][j];
        }
    }
    // Xác định hàng có tổng lớn nhất
    for (int i = 0;i<n;i++){
        for (int j = 0; j<m;j++){
            sum = 0;
            sum = sum + a[i][j];
            }
        if (sum > max){
            max = sum;
            k = i + 1;
            }       
    }
    // Xuất ra hàng có số tổng lớn nhất
    cout << k; 
   
    return 0;
}