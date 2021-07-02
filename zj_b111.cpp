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

/*     float ans = 0, i = 0;
        vector<char> vv;
        vector<float> vvv;
        for(auto&[key, value] : m){
            vv.push_back(key);
            vvv.push_back(value);
        }
        for(int i = 0; i < vv.size(); i++){
            cout << vv[i] << "----" << vvv[i] << endl;*/

/*include <bits/stdc++.h>
#define _for(i, a, b) for(int i = (a); i < (b); i++)
using namespace std;

int main() {
    int n;
    while (scanf("%d", &n) == 1) {
        priority_queue<pair<float, string>, vector<pair<float, string>>, greater<> > q;
        unordered_map<char, int> mp;
        vector<float> vec;
        while(n--){
            float b;
            char a;
            cin >> a >> b;
            string s = "" + a;
            q.push({b, s});
            vec.push_back(b);
            mp[a] = 0;
        }
        while (q.size() > 1) {
            auto fir = q.top();
            q.pop();
            auto sec = q.top();
            q.pop();
            fir.second += sec.second;
            fir.first += sec.first;
            for (char c : fir.second) {
                cout << c << "---";
            }
            cout << endl;
            q.push(fir);
        }
        float sum = 0, i = 0;
        for (auto& [key, value] : mp) {
            i++;
        }
        cout << i;
    }

}*/