//TODO:
// 输入两个字符串， 将其中较短的串接到较长的串的后面
// 不使用及同函数 strcat
// 每个输入的串的长度不超过20

#include <iostream>

using namespace std;

int main() {
    
    int len1, len2;
    char str1[40], str2[40];
    cin.getline(str1, 20);
    cin.getline(str2, 20);
    
    for (len1 = 0; str1[len1] != '\0'; len1++);
    for (len2 = 0; str2[len2] != '\0'; len2++);
    
    if (len1 >= len2) {
        for (len2 = 0; str2[len2] != '\0'; len2++)
            str1[len1++] = str2[len2];
        str1[len1] = '\0';
    } else {
        for (len1 = 0; str2[len1] != '\0'; len1++) {
            str2[len2++] = str1[len1];
        str2[len2] = '\0';
        }
    }
    
    cout << str1 << endl;
    cout << str2 << endl;
}