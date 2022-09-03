#include <iostream>

using namespace std;

int main() {
    
    int n, x, y, eat;
    cin >> n >> x >> y;
    
    int remain = y % x;
    //if (remain == 0) {
    //    eat = n - y / x;
    //} else {
    //    eat = n - (y / x + 1);
    //}
    
    eat = (remain == 0)? (n- y / x) : (n - (y / x + 1));
    
    if (eat < 0) eat = 0;
    
    cout << eat << endl;
    
    return 0;
}