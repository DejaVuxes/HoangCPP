#include <iostream>
#include <string>

using namespace std;

int main(){
    //Nhập chuỗi kí tự
    string s; getline(cin,s);
    int len = s.size();
    string x;
    int check;
    //Xác định vị trí chuỗi tên 
    for (int i = 0; i < len ; i++){
        if (s[i] == ' '){
            check = i;
        }
    }
    //Xuất vị trí chuỗi họ lót
    for (int i = 0; i < check ; i++){
        cout <<  s[i];
    }
    cout << endl;
    //Xuất vị trí chuỗi tên
    for (int i = check+1; i < len ; i++){
        cout <<  s[i];
    }
    return 0;
}