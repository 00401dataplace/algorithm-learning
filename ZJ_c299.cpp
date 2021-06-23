#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec;
    for (int i=0; i<n; i++){
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    int size = vec.size();
    int max = vec[size-1], min = vec[0];
    if (max - min == size - 1 ){
        cout << min << " " << max << " yes";
    }else{
        cout << min << " " << max << " no";
    }
    cout << endl;
}