#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    while(n--){
        int w, h;
        cin >> w >> h;

        int p;
        cin >> p;
        priority_queue<pair<double, char>, vector<pair<char, char>>, greater<double>> q;
        while(p--){
            int x, y ,a, b;
            cin >> x >> y >> a >> b;

            double i1 = y - x*b/a;
            double i2 = y + (w-x)*b/a;
            double i3 = x - y*a/b;
            double i4 = x + (h-y)*a/b;
            
        }
        
    }
}