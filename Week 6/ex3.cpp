#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;

    int score[n];
    for (int i = 0; i < n; i++) {
        cin >> score[i];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (score[j + 1] > score[j]) {
                int tmpScore = score[j];
                score[j] = score[j + 1];
                score[j + 1] = tmpScore;
            }
        }
    }
    
    cout << score[0] << endl;
    
    return 0;
}