#include <iostream>
#include <iomanip>

using namespace std;

void subtract(int h1, int m1, int h2, int m2, int& h, int& m) {
    int minutes1 = h1 * 60 + m1;
    int minutes2 = h2 * 60 + m2;
    int diffMinutes = minutes2 - minutes1;

    h = diffMinutes / 60;
    m = diffMinutes % 60;
    if(h < 0){
        h = h * -1;
    }
    if(m < 0){
        m = m * -1;
    }
}

void getTime(int& h, int& m) {
    cin >> h >> m;
}

