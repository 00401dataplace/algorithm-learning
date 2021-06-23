#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> q;
    int m;
    cin >> m;
    for (int i=0; i<m; i++) {
        int temp;
        cin >> temp;
        q.push(temp);
    }
    int x = 0, y = 0;
    while(!q.empty()){
        int num = q.top();
        q.pop();
        if (x <= y) {
            x *= 10;
            x += num;
        }else{
            y *= 10;
            y += num;
        }
    }
    cout << x * y << endl;
    return 0;
}