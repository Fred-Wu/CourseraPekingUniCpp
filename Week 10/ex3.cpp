//描述
//TODO: 一个以'.'结尾的简单英文句子，单词之间用空格分隔，没有缩写形式和其它特殊形式

//输入
//一个以'.'结尾的简单英文句子（长度不超过500），单词之间用空格分隔，没有缩写形式和其它特殊形式

//输出
//该句子中最长的单词。如果多于一个，则输出第一个

#include <iostream>
using namespace std;

int main() {
    
    int input_len = 500;
    char s[input_len];

    cin.getline(s, input_len, '.');

    int flag = 0;
    int indx, len;
    int length = 0, start;
    
    for (int i = 0; s[i] != '\0'; i++) {
        
        if (s[i] == '\n') continue;
        
        if (s[i] == ' ') {
            flag = 0;
        } else if (s[i] != ' ' && flag == 0) {
            // reset new word counter
            flag = 1;
            indx = i;
            len = 1;
        } else {
            len++;
            // compare cumulative word length with previous length
            // assign the word start index if the maximum length in 
            // one word greater than all other words. 
            if (len > length) {
                length = len;
                start = indx;
            }
        }

    }

    char out[length];

    for (int i = start; i < (start + length); i++)
        out[i - start] = s[i];
        
    out[length] = '\0';
    cout << out << endl;

    return 0;
}

