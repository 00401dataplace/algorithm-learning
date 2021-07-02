#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(getline(cin, s)){
        string cp;
        while(true){
            string plus;
            cin >> plus;
            cp += plus;
            if(cp[cp.size()-1] == '0' && cp[cp.size()-2] == '0' && cp[cp.size()-3] == '0') break;
        }

        
    }
}