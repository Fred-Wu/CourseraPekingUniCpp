//描述
//TODO 一般我们用strcmp可比较两个字符串的大小，比较方法为对两个字符串从前往后逐个字符相比较（按ASCII码值大小比较），直到出现不同的字符或遇到 '\0'为止。如果全部字符都相同，则认为相同；如果出现不相同的字符，则以第一个不相同的字符的比较结果为准。但在有些时候，我们比较字符串的大小时，希望忽略字母的大小，例如 "Hello"和"hello"在忽略字母大小写时是相等的。请写一个程序，实现对两个字符串进行忽略字母大小写的大小比较。 

//输入
//输入为两行，每行一个字符串，共两个字符串。（请用cin.getline(s, 80) 录入每行字符串）（每个字符串长度都小于80)

//输出
//如果第一个字符串比第二个字符串小，输出一个字符 "<"
//如果第一个字符串比第二个字符串大，输出一个字符 ">"
//如果两个字符串相等，输出一个字符 "="

#include <iostream>
#include <string.h>

    
using namespace std;

int main() {
    
    char s1[80];
    char s2[80];
    char result;
    cin.getline(s1, 80);
    cin.getline(s2, 80);

    if (strcasecmp(s1, s2) < 0) 
        result  = '<' ;
    else if(strcasecmp(s1, s2) == 0)
        result = '=';
    else result = '>';
    
    cout << result << endl;
    
    return 0;
}