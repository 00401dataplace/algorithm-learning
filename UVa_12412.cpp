#include <bits/stdc++.h>
using namespace std;


bool sortcol(const vector<int>& v1, const vector<int>& v2) {
    return v1[4] < v2[4];
}
int main() {
    vector<string> SID;
    vector<string> CID;
    vector<string> name;
    vector<vector<int>> score;
    vector<vector<int>> score_sort;

    while (true) {
        cout << "Welcome to student Performance Management System (SPMS).\n";
        cout << "1 - Add\n";
        cout << "2 - Remove\n";
        cout << "3 - Query\n";
        cout << "4 - Show ranking\n";
        cout << "5 - Show Statistics\n";
        cout << "0 - Exit\n";
        
        int mode;
        cin >> mode;
        if (mode == 0) break;
        if (mode == 1) {
            while (true){
                string s, c, n;
                vector<int> sc;
                cout << "Please enter the SID,CID,name and four scores.Enter 0 to finish.\n";
                cin >> s;
                if (s == '0') break; 
                cin >> c >> n;
                for (int i = 0; i < 4; i++) {
                    int temp;
                    cin >> temp;
                    sc.push_back(temp);
                }
                SID.push_back(s);
                CID.push_back(c);
                name.push_back(n);
                score.push_back(sc);
                if (count(SID.begin(), SID.end(), s) >= 2) cout << "Duplicated SID\n";
            }
            continue;
        }
        else if (mode == 2) {
            while (true){
                cout << "Please enter SID or name.Enter 0 to finish.\n";
                string s;
                if (s == '0') break;
                int sz = s.size();
                if (isalpha(s[0])) {
                    int num = count(name.begin(), name.end(), s);
                    while (s--){
                        vector<int>::iterator it = find(name.begin(), name.end(), s);
                        if (it != name.end()){
                            int idx = distance(name.begin(), it) - 1;
                            name.erase(name.begin() + idx);
                        }
                    }
                    cout << num << " student(s) removed.\n";
                }else{
                    int num = count(SID.begin(), SID.end(), s);
                    while (s--){
                        vector<int>::iterator it = find(SID.begin(), SID.end(), s);
                        if (it != SID.end()){
                            int idx = distance(SID.begin(), it) - 1;
                            SID.erase(SID.begin() + idx);
                        }
                    }
                    cout << num << " student(s) removed.\n";                
                }
            }
            continue;
        }
        else if (mode == 3) {
            for (int i=0; i<score.size(); i++) {
                int sum = accumulate(score[i].begin(), score[i].end(), 0);
                int mean = sum / 4;
                score[i].push_back(sum);
                score[i].push_back(mean);
            }
            copy(score.begin(), score.end(), back_inserter(score_sort));
            sort(score_sort.begin(), score_sort.end(), sortcol);
            for (int i=1; i<score.size(); i++) {
                
            }
            
            cout << "Please eenter SID or name.Enter 0 to finish.\n";
            string s;
            cin >> s;
            if (isalpha(s[0])) {

            }

        }
    }
}