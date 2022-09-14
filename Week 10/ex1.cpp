//描述
//TODO: 在一个字符串中找出元音字母a, e, i, o, u出现的次数。 

//输入
//输入一行字符串（字符串中可能有空格，请用cin.getline(s, counts) 方法把一行字符串输入到字符数组s中，
//其中counts是s的最大长度，这道题里面可以直接写80。），字符串长度小于80个字符。 

//输出
//输出一行，依次输出a, e, i, o, u在输入字符串中出现的次数，整数之间用空格分隔。

#include <iostream>
using namespace std;

int main() {
    
    int n = 80;
    char s[n];
    int cnt[5] = {0};
    
    cin.getline(s, n);
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a')
            cnt[0]++;
        else if (s[i] == 'e')
            cnt[1]++;
        else if (s[i] == 'i')
            cnt[2]++;
        else if (s[i] == 'o')
            cnt[3]++;
        else if (s[i] == 'u')
            cnt[4]++;
        else continue;
    }

    for (int i = 0; i < 5; i++) {
        cout << cnt[i] << " ";
    }
    cout << endl;
    
    return 0;
}