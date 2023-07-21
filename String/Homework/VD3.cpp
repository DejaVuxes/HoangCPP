#include <iostream>
#include <string>

using namespace std;

int main(){
    //Nhập chuỗi kí tự và kí tự cần tìm kiếm
    string s; getline(cin,s);
    char h; cin >> h;
    int len = s.size();
    int count = 0;
    //Tìm chuỗi kí tự nếu kí tự cần tìm là kí tự không in hoa
    for (int i = 0; i < len ; i++){
        if ( h < 123 && h > 96 ){
            if (s[i] == h || s[i] == h - 32){
            count++;
            }
        }
    //Tìm chuỗi kí tự nếu kí tự cần tìm là kí tự in hoa
        if ( h < 91 && h > 64 ){
            if (s[i] == h || s[i] == h + 32){
            count++;
            }
        }
    }
    //Xuất số lần kí tự xuất hiện
    cout << count;
    return 0;
}