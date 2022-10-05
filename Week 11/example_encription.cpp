//简易字符串加密：
// TODO: 
// 输入一个字符串， 把每个字符变成它后续字符， 如果是 'Z' 或者 'z'，怎么变成
// 'A' 或者 'a'. 空格则不变。 然后将变换后的字符串输出；

#include <iostream>

using namespace std;

int main () {
    
    char str[200];
    while(cin.getline(str, 200)) {
        
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == 'Z') {
                str[i] = 'A';
                continue;
            }
            if (str[i] == 'z') {
                str[i] = 'a';
                continue;
            }
            if (str[i] == ' ') 
                continue;
            
            str[i]++;
        }
        
        cout << str << endl;
    }
    return 0;
}