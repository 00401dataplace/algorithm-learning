// #include<bits\stdc++.h>
// using namespace std;

// int main(){
//     int T;
//     cin >> T;
//     while(T--){
//         vector<int> good;
//         int bag;
//         int n;
//         cin >> n;
//         cin >> bag;
//         while(n--){
//             int a;
//             cin >> a;
//             good.push_back(a);
//         }
//         sort(good.begin(), good.end());

//         int count = 0;
//         while(!good.empty()){
//             int space = bag - good[good.size()-1];
//             good.erase(good.begin() + good.size() - 1);
//             int i = 0;
//             while(good[i+1] <= space){
//                 i++;
//             }
//             if(i >= 0) good.erase(good.begin() + i);
//             count++;
//         }
//         cout << count;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v {0, 1, 2, 3, 4};
	v.erase(v.begin() + v.size() - 1);
	cout << v[4];
}