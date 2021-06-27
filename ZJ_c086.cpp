#include <iostream>
#include <list>
#define _for(i, a, b) for(int i = (a); i < (b); i++)
using namespace std;

int main() {
    int n, x;
    while (cin >> n >> x) {
        list<int> res;
        int temp;
        _for(i, 0, 20) res.emplace_back(cin >> temp);
        list<int>::iterator it = res.begin();
        _for(i, 0, 20) {
            int step = res[i];
            int L = 0;
            while (it + step < res.end()) {
                res.erase(it + step);
                
            }
        }
    }

}