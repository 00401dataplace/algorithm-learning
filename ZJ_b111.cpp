#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        priority_queue <pair<float, string>, vector<pair<float, string>>, greater<>> q;
        unordered_map <char, float> m;
        vector<pair<float, char>> v;
        string x;
        float y;
        while(n--){
            cin >> x >> y;
            q.push({y, x});
            v.push_back({y, x[0]});
            m[x[0]] = 0;
        }
        while(q.size() != 1){
            string s = "";
            float sum = 0;
            s += q.top().second;
            sum += q.top().first;
            q.pop();
            s += q.top().second;
            sum += q.top().first;
            q.pop();
            q.push({sum, s});
            for(int i = 0; i < s.size(); i++){
                m[s[i]]++;
            }
        }

        float ans = 0;
        for(int i = 0; i < v.size(); i++){
            ans += (v[i].first * m[v[i].second]);
        }
        cout << fixed <<  setprecision(2) << ans << endl;
    }
}