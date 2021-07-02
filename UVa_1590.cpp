#include<bits/stdc++.h>     //55555
#define _for(i, a, b) for(int i = (a); i < (b); i++)
using namespace std;

int ten2two(int n){
    int a = 0, ten = 1;
    while(n>0){
        int b=n%2;
        n/=2;
        a+=b*ten;
        ten*=10;
    }
    return a;
}

int two2ten(int n){
    int a = 0, two = 1;
    while(n>0){
        int b=n%10;
        n/=10;
        a+=b*two;
        two*2;
    }
    return a;
}

int main(){
    int n;
    while(cin >> n){
        vector<vector<int>> v_ip;
        _for(i, 0, n){
            string s;
            vector<int> temp_vec;
            stringstream str2int;
            cin >> s;
            for (int i=0; i<s.size(); i++) {
                if (s[i] == '.') {
                    s.replace(i, 1, " ");
                }
            }
            str2int << s;
            int temp;
            while (true) {
                str2int >> temp;
                if (str2int.fail()) break;
                temp_vec.emplace_back(temp);
            }
            v_ip.emplace_back(temp_vec);
        }
        
        _for(i, 0, 4){

        }
        int goal = 0;
        for(; goal < v_ip.size(); goal++){
            int count = 0;
            _for(i, 1, v_ip.size())    
                if(v_ip[goal][0] == v_ip[goal][i]){
                    count++;
                }
            if(count < v_ip.size()-1) break;
        }


        int two = ten2two(v_ip[goal]);
        int goal_of_goal = 7;
        for(; goal_of_goal >= 0; goal_of_goal--){
            int count = 0;
            _for(i, 1, v_ip.size()){
                int x = pow(10, goal_of_goal)
                if(v_ip[goal] / x == 0){
                    if(two/pow(10, goal_of_goal) != two/pow(10, goal_of_goal))
                        count++;
                }
            }
            if(count < v_ip.size()-1) break;
        }

        string s;
        int num = ten2two(v_ip[goal]*pow(10, 12) + v_ip[goal]*pow(10, 8) + v.ip[goal]*pow(10, 4) +v.ip[goal]);
        stringstream ss;
        ss << num;
        ss >> s;
        _for(i, 0, v_ip.size()){
            cout << s[i];
        }
    }
}