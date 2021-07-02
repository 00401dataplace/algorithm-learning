#include<bits\stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string s, ss;
    while(cin >> n){
        if(n == -1) break;
        cin >> s >> ss;
        map<char, int> m;
        map<char, int> m_g;
        for(int i = 0; i < s.size(); i++){
            m[s[i]]++;
        }
        for(int i = 0; i < ss.size(); i++){
            m_g[ss[i]]++;
        }

        
        int chance = 7, problem = m.size();
        for(auto& [key, value] : m_g){
            bool aaa = false;
            for(auto& [key_, value_] : m){
                if(key == key_){
                    aaa = true;
                    continue;
                }
            }
            if(aaa) problem--;
            else chance--;
        }

        cout << "Round " << n << endl;
        if(problem == 0) cout << "You win." << endl;
        else{
            if(chance <= 0) cout << "You lose." << endl;
            else cout << "You chickened out." << endl;
        }
    }
    return 0;
}