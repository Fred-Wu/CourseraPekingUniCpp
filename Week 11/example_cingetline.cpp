#include <iostream>

using namespace std;

int main() {
    char a[10][10];
    int n = 0;
    cin >> n;
    cin.get(); //fixer to read first "return" after input n;
    for (int i = 0; i < n; i++) {
        cin.getline(a[i], 10);  // issue; return key would be read into buffer as first return from "n" input, 
                                // so only 6 returns from the getline inputs
                                // fix: add cin.get() before the loop to read first return;
    }
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    
    return 0;
}