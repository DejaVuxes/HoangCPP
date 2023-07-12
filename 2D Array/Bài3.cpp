#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    int max = 0;
    int a[n][m];
    //Nhập mảng
    for (int i = 0;i<n;i++){
        for (int j = 0; j<m;j++){
            cin >> a[i][j];
        }
    }
    // Xác định số lớn nhất của hàng đầu tiên
    for (int j = 0; j<m;j++){
        if (a[0][j] > max){
            max = a[0][j];
        }
    }
    // Xuất giá trị lớn nhất của hàng đầu tiên
    cout << max; 
   
    return 0;
}