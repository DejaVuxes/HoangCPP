#include <iostream>
#include <string>

using namespace std;

int main(){
    //Nhập chuỗi kí tự và nơi cần tách
    string s1; getline(cin,s1);
    string s2; getline(cin,s2);
    string moi;
    int len1 = s1.size();
    int len2 = s2.size();
    int count = 0;
    int k;
 
    for (int i = 0; i < len1; i++){
        //Xác định vị trí cần cắt
        if (s2[count] == s1[i]){
            k = i;
            while (s2[count] == s1[k] && count < len2){ 
                count++;
                k++;
            }
            //Tạo chuỗi mới sau khi cắt
            if (count == len2){
                for(int j = i; j < len1; j++){
                    moi+=s1[j];
                }
            }
            count = 0; 
        }
    }
    //In chuỗi vừa cắt
    cout << moi;
    return 0;
}