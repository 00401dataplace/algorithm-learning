#include <iostream>
using namespace std;

int main() {
    double a, b, c, d;
    while(cin >> a >> b >> c >> d) {
        int day = 1;
        d /= 100.0;
        while (true) {
            a -= b;
            a+= c;
            b = b - b * d;
            if (a <= 0) {
                cout << "success on day " << day << endl;
                break;
            }else if (b < c) {
                cout << "failure on day " << day << endl;
                break;
            }
            day++; 
        }
    }
}