#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    int w, h, n;
    while (T--) {
        cin >> w >> h;
        cin >> n; // 流星數量
        priority_queue<pair<double, char>, vector<pair<double, char>>, greater<double>>

        while (n--){
            int x, y, a, b;
            cin >> x >> y >> a >> b;
            double s = b / a;
            bool in = false;
            if ( (x < w && x > 0) && (y < h && y > 0)) in =  !in; 
            double p1 = y - x*b/a;
            double p2 = y + (w-x)*b/a;
            double p3 = x - y*a/b;
            double p2 = x + (h-y)*a/b;
            
            
        }
    }
}