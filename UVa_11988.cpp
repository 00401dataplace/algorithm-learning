// 使用STL Linked List
// 重點是使用list的虛擬結點，利用insert在結點前插入字元
// 注意! pos指向該結點，且不會改變指向對象，換句話說，insert()過後，該結點向後移動，但pos依然指向原本的結點 

#include <bits/stdc++.h>
using namespace std;
typedef list<char> CL;

int main() {
    for (string line; cin>>line; cout << endl) {
        CL l;
        CL::iterator pos = l.begin();  // 目前為虛擬結點
        for (size_t i=0; i<line.size(); i++) {
            char c = line[i];
            if (c == '[') {
                pos = l.begin();
            }else if (c == ']') {
                pos = l.end();
            }else {
                l.insert(pos, c);
            }
        }
        for (pos = l.begin(); pos != l.end(); pos++) {
            cout << *pos;
        }
    }
    return 0;
}