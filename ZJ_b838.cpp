#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        stack<int> st;
        int count = 0;
        for (int i=0; i<s.length(); i++){
            if (!st.empty() && st.top() == '(' && s[i] == ')') {
                count++;
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        if (!st.empty()) count = 0;
        cout << count << endl;
    }
}