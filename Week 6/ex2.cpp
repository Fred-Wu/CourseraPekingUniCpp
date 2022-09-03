//1L = 1000cm^3

#include <iostream>

using namespace std;

const double PI = 3.14159;
const int drink = 20 * 1000; // convert L to cm3

int main() {
    
    int h, r;    
    cin >> h >> r;
    
    double volume = (PI * r * r * h);
    
    int num_bucket = drink / volume + 1; 
        
    cout << num_bucket << endl;
    
    return 0;
}