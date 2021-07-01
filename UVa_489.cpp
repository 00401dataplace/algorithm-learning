#include <iostream>
#include <unordered_map>
#include <fstream>
using namespace std;

int main() {
    fstream ff("output.txt", ios::out);
    int n;
    string ques, gues;
    while (cin >> n) {
        if (n == -1) break;
        cout << "Round " << n << endl;
        cin >> ques;
        cin >> gues;
        unordered_map<char, int> qset, gset;
        for (char c : ques) qset[c]++;
        for (char c : gues) gset[c]++;
        int gues_time = 0, cor_time = 0;
        int sz = qset.size();
        for (auto& [key1, value1] : gset) {
            if (!qset.count(key1))
                gues_time++;
            else
                cor_time++;
            if (cor_time == sz)
                {cout << "You win." << endl; break; ff << "You win.\n";}
            else if (gues_time >= 7)
                {cout << "You lose." << endl; break; ff << "You lose.\n";}
        }
        if (gues_time < 7 && cor_time < sz) {cout << "You chickened out." << endl; ff << "You chickened out.\n";}
    }
}

