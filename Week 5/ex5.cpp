#include <iostream>

using namespace std;

int main() {
    
    int N;
    cin >> N;
    
    int num[N];
    int rev_num[N];
    
    for (int i = 0; i < N; i++) 
        cin >> num[i];

    for (int i = 0; i < N; i++) {
        rev_num[i] = num[N-i-1];
        
        cout << rev_num[i] << " ";
    }
    cout << endl;
    return 0;
}