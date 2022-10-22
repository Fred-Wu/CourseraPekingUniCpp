//描述

//有两个字符串str和substr，str的字符个数不超过10，substr的字符个数为3。（字符个数不包括字符串结尾处的 '\0'。）将substr插入到str中ASCII码最大的那个字符后面，若有多个最大则只考虑第一个。 输入

//输入包括若干行，每一行为一组测试数据，格式为

//str substr
//输出

//对于每一组测试数据，输出插入之后的字符串。

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    
    char str[10], substr[3];
   

    while(cin >> str >> substr) {
        
        int str_len = strlen(str);
        
        int max = str[0];
        int maxIndex = 0;
        for (int i = 1; str[i] != '\0'; i++) {
            if (max < str[i]) {
                max = str[i];
                maxIndex = i;
            }
        }
        
        char concat[maxIndex+1];
        char strsep[str_len-maxIndex];
        
        for (int i = 0; i <= maxIndex; i++) concat[i] = str[i];
        concat[maxIndex+1] = '\0';
        
        for (int j = maxIndex + 1; str[j] != '\0'; j++) strsep[j-maxIndex-1] = str[j];
        
        strsep[str_len - maxIndex - 1] = '\0';
        strsep[str_len-maxIndex] = '\0';
        
  
        strcat(strcat(concat, substr), strsep);
        
        cout << concat << endl;
    }
       
    return 0;
}
