#include <iostream>

using namespace std;

int main() {
    char c;
    cout << "enter a sentence: " << endl;
    while((c = cin.get()) != EOF)  //EOF: end of file, 空格不省略
        cout << c;
    
    return 0;
}