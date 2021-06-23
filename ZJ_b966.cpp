#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<> > q;
    for (int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        q.push({a, b});
    }
    int min = q.top().first, max = q.top().second;
    q.pop();
    int len = 0;
    while (!q.empty()) {
        if (q.top().first >= min && q.top().second <= max) {
            q.pop();
        }else if (q.top().first > max) {
            len += max - min;
            min = q.top().first;
            max = q.top().second;
            q.pop();
        }else if (q.top().second > max) {
            max = q.top().second;
            q.pop();
        }
    }
    len += max - min;
    cout << len << endl;
}