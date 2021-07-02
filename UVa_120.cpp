#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    vector<int> v;
    while (getline(cin, s)){
        stringstream ss(s);
        int a;
        while(ss >> a){
            v.push_back(a);
        }

        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;

        priority_queue<int> q;
        for(int i : v) q.push(i);
        
        int num = v.size()-1;
        vector <int> ans;
        while(!q.empty()){
            if(q.top() == v[num]){
                q.pop();
                num--;
                continue;
            }
            if(q.top() == v[0]){
                reverse(v.begin(), v.begin()+num+1);
                q.pop();
                ans.push_back(v.size()-num);
            }
            else{
                for(int i = 0; i < num; i++){
                    if(q.top() == v[i]){
                        reverse(v.begin(), v.begin()+i+1);
                        ans.push_back(v.size()-i);
                        reverse(v.begin(), v.begin()+num+1);
                        ans.push_back(v.size()-num);
                        q.pop();
                        break;
                    }
                }
            }
            num--;
        }
        
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << 0 << endl;
        ss.str("");
        ss.clear();
        v.clear();
    }
    return 0;
}