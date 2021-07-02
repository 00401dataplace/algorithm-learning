#include <bits/stdc++.h>
using namespace std;

typedef struct student{
    string sid;
    int cid;
    string Name;
    int c;
    int m;
    int e;
    int p;
}S;

bool cmp(int a, int b){
    return a > b;
}

int main(){
    int n = -1;
    vector<S> students;
    vector<int> pi;    //排名
    while(n != 0){
        cout << "Welcome to Student Performance Management System (SPMS).\n\n1 - Add\n2 - Remove\n3 - Query\n4 - Show ranking\n5 - Show Statistics\n0 - Exit\n\n";
        cin >> n;
        if(n == 1){
            string a, c;
            int b, d, e, f, g;
            cout << "Please enter the SID, CID, name and four scores. Enter 0 to finish.\n";
            while(cin >> a){
                if(a[0] == '0' && a.size() == 1) break;
                cin >> b >> c >> d >> e >> f >> g;
                bool aaa = false;
                for(int i = 0; i < students.size(); i++){
                    if(a == students[i].sid) aaa = true;
                }
                if(aaa) cout << "Duplicated SID." << endl;
                else{
                    students.push_back({a, b, c, d, e, f, g});
                    pi.push_back(d+e+f+g);
                }
                cout << "Please enter the SID, CID, name and four scores. Enter 0 to finish.\n";
            }
        }
        else if(n == 2){
            string a;
            cout << "Please enter SID or name. Enter 0 to finish." << endl;
            while(cin >> a){
                if(a[0] == '0' && a.size() == 1) break;
                int count = 0;
                if(isdigit(a[0])){
                    for(int i = 0;i < students.size(); i++){
                        if(students[i].sid == a){
                            count++;
                            students.erase(students.begin()+i);
                            int sum = students[i].c + students[i].m + students[i].p + students[i].e;
                            bool aaa = true;
                            for(int j = 0; j < pi.size(); j++){
                                if(aaa) pi.erase(pi.begin()+j);
                                aaa = false;
                            }
                        }                          
                    }
                }
                else{
                    for(int i = 0;i < students.size(); i++){
                        if(students[i].sid == a){
                            count++;
                            students.erase(students.begin()+i);
                            int sum = students[i].c + students[i].m + students[i].p + students[i].e;
                            bool aaa = true;
                            for(int j = 0; j < pi.size(); j++){
                                if(aaa) pi.erase(pi.begin()+j);
                                aaa = false;
                            }
                        }
                    }
                }

                cout << count << "student(s) removed." << endl;
                cout << "Please enter SID or name. Enter 0 to finish." << endl;
            }
        }
        else if(n == 3){
            string a;
            sort(pi.begin(), pi.end(), cmp);
            cout << "Please enter SID or name. Enter 0 to finish." << endl;
            while(cin >> a){
                if(a[0] == '0' && a.size() == 1) break;
                if(isdigit(a[0])){
                    for(int i = 0;i < students.size(); i++){
                        if(students[i].sid == a){
                            int sum = students[i].c + students[i].m + students[i].p + students[i].e;
                            bool aaa = true;
                            for(int j = 0; j < pi.size(); j++){
                                if(sum == pi[j]){
                                    if(aaa) cout << j+1 << " ";
                                    aaa = false;
                                }
                            }
                            cout << students[i].sid << " " << students[i].cid << " " << students[i].Name << " " << students[i].c << " " << students[i].m << " " << students[i].e << " " << students[i].p << " " << sum << " " << fixed <<  setprecision(2) << (float)sum/4 << endl;
                        }
                    }
                }
                else{
                    for(int i = 0; i < students.size(); i++){
                        if(students[i].Name == a){
                            int sum = students[i].c + students[i].m + students[i].p + students[i].e;
                            bool aaa = true;
                            for(int j = 0; j < pi.size(); j++){
                                if(sum == pi[j]){
                                    if(aaa) cout << j+1 << " ";
                                    aaa = false;
                                }
                            }
                            cout << students[i].sid << " " << students[i].cid << " " << students[i].Name << " " << students[i].c << " " << students[i].m << " " << students[i].e << " " << students[i].p << " " << sum << " " << fixed <<  setprecision(2) << (float)sum/4 << endl;
                        }
                    }
                }
                cout << "Please enter SID or name. Enter 0 to finish." << endl;
            }
        }
        else if(n == 4) cout << "Showing the ranklist hurts students' self-esteem. Don't do that." << endl;
        else if(n == 5){
            int cs;
            cin >> cs;
            int c_ps = 0, m_ps = 0, e_ps = 0, p_ps = 0, c_sum = 0, m_sum = 0, e_sum = 0, p_sum = 0, num = pi.size(), pl = 0;
            int four_pass = 0, three_pass = 0, two_pass = 0, one_pass = 0, idiot = 0;
            for(int i = 0; i < num; i++){
                if(cs == students[i].cid || cs == 0){
                    pl++;
                    if(students[i].c >= 60) c_ps++;
                    if(students[i].m >= 60) m_ps++;
                    if(students[i].e >= 60) e_ps++;
                    if(students[i].p >= 60) p_ps++;
                    c_sum += students[i].c;
                    m_sum += students[i].m;
                    e_sum += students[i].e;
                    p_sum += students[i].p;
                    int num_pass = (students[i].c >= 60)+(students[i].m >= 60)+(students[i].e >= 60)+(students[i].p >= 60);
                    if(num_pass == 4) four_pass++;
                    else if(num_pass >= 3) three_pass++;
                    else if(num_pass >= 2) two_pass++;
                    else if(num_pass >= 1) one_pass++;
                    else idiot++;
                }
            }

            cout << "Chinese" << endl << "Average Score: " << fixed <<  setprecision(2) << (float) c_sum/pl << endl << "Number of passed students: " << c_ps << endl << "Number of failed students: " << pl-c_ps << endl;
            cout << "Mathematics" << endl << "Average Score: " << fixed <<  setprecision(2) << (float) m_sum/pl << endl << "Number of passed students: " << m_ps << endl << "Number of failed students: " << pl-m_ps << endl;
            cout << "English" << endl << "Average Score: " << fixed <<  setprecision(2) << (float) e_sum/pl << endl << "Number of passed students: " << e_ps << endl << "Number of failed students: " << pl-e_ps << endl;
            cout << "Programming" << endl << "Average Score: " << fixed <<  setprecision(2) << (float) p_sum/pl << endl << "Number of passed students: " << p_ps << endl << "Number of failed students: " << pl-p_ps << endl;
            cout << "Overall:" << endl << "Number of students who passed all subjects: " << four_pass << endl << "Number of students who passed 3 or more subjects: " << three_pass << endl << "Number of students who passed 2 or more subjects: " << two_pass << endl << "Number of students who passed 1 or more subjects: " << one_pass << endl << "Number of students who failed all subjects: " << idiot << endl;
        }
    }
}