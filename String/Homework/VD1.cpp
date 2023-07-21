#include <iostream>
#include <string>

using namespace std;

int main(){
    //Nhập chuỗi kí tự
    string s; getline(cin,s);
    int len = s.size(); 

    //Xuất ngược lại chuỗi kí tự
    for (int i = len - 1; i >=0; i--){
        cout << s[i];
        }
    return 0;
}