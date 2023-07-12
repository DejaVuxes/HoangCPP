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
    // Xác định cột có tổng lớn nhất
    for (int j = 0;j<m;j++){
        for (int i = 0; i<n;i++){
            sum = 0;
            sum = sum + a[i][j];
            }
        if (sum > max){
            max = sum;
            k = j + 1;
            }       
    }
    // Xuất ra cột có số tổng lớn nhất
    cout << k; 
   
    return 0;
}