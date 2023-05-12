#include <iostream>
using namespace std;
#include <iomanip>
#include "Time.h"

int main() {
    int h1 = 0, m1 = 0, h2 = 0, m2 = 0;
    int th = 0, tm = 0;

    cout << "What time was it?" << endl;
    getTime(h1, m1);
    cout << "What time is it now?" << endl;
    getTime(h2, m2);
    
    subtract(h1, m1, h2, m2, th, tm);
    cout << "Time diff is: ";
    cout << setfill('0') << setw(2) << th;
    cout << ":" << setfill('0') << setw(2) << tm << endl;
    
    return 0;
}
