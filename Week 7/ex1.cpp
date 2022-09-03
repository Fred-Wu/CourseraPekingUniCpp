//描述

//某医院想统计一下某项疾病的获得与否与年龄是否有关，需要对以前的诊断记录进行整理。

//输入
//共2行，第一行为过往病人的数目n（0 < n <= 100)，第二行为每个病人患病时的年龄。

//输出
//每个年龄段（分四段：18以下，19-35，36-60，大于60注意看样例输出的格式）的患病人数占总患病人数的比例，以百分比的形式输出，精确到小数点后两位（double）。关于c++的格式化的输入输出，请参考：http://www.cplusplus.com/reference/iomanip。也可以在网上搜索一下，资料很多的。

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int n; // number of patients
    cin >> n;

    int age[n]; // array to store patient's age;
    for (int i = 0; i < n; i++) {
        cin >> age[i];
    }     
    
    int age_grp[4] = {0, 0, 0, 0};   
    for (int i = 0; i < n; i++) {
        if (age[i] <= 18) {
            age_grp[0] += 1;
        } else if (age[i] >= 19 && age[i] <= 35) {
            age_grp[1] += 1;
        } else if (age[i] >=36 && age[i] <= 60) {
            age_grp[2] += 1;
        } else if (age[i] > 60) {
            age_grp[3] += 1;
        }
            
    }
    
    double grp_pct[4] = {0.0, 0.0, 0.0, 0.0};
    for (int i = 0; i < 4; i++) {
        grp_pct[i] = 100 * double(age_grp[i]) / double(n);
    }

    
    cout << setprecision(2) << fixed;
    cout  << "1-18: " << grp_pct[0] << "%" << endl;
    cout << "19-35: " << grp_pct[1] << "%" << endl;
    cout << "36-60: " << grp_pct[2] << "%" << endl;
    cout << "60-: "  << grp_pct[3] << "%" << endl;

    return 0;
}