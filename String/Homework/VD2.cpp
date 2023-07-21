#include <iostream>
#include <string>

using namespace std;

int main(){
    //Nhập chuỗi kí tự và kí tự cần tìm kiếm
    string s; getline(cin,s);
    char g; cin >> g;
    int len = s.size();
    int pos = 1;

    for (int i = 0; i < len ; i++){
        //Xác định vị trí tìm kiếm
        if (s[i] == ' '){
            pos++;
            }
        /*Xác định trong vị trí đó có kí tự hay không 
        và in ra vị trí nếu có kí tự*/
        if (s[i] == g){
            cout << pos << " ";
        }
    }
    return 0;
}