#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> grade;
double credit[9] = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0};


#define A_PLUS 0
#define A0 1
#define B_PLUS 2
#define B0 3
#define C_PLUS 4
#define C0 5
#define D_PLUS 6
#define D0 7
#define F 8

int gradeToIndex(const string& grade_str) {
    if (grade_str == "A+") return A_PLUS;
    else if (grade_str == "A0") return A0;
    else if (grade_str == "B+") return B_PLUS;
    else if (grade_str == "B0") return B0;
    else if (grade_str == "C+") return C_PLUS;
    else if (grade_str == "C0") return C0;
    else if (grade_str == "D+") return D_PLUS;
    else if (grade_str == "D0") return D0;
    else if (grade_str == "F") return F;
    else return -1; // Error case
}

int main(){
    string a;
    double two;
    string grade_str;

    double  all_grade = 0.0; 
    double  all_creadit = 0.0;
    for (int i = 0; i < 20; i++) {
        cin >> a >> two >> grade_str;
        if (grade_str == "P") {
            // If the grade is "P", we skip this course
            continue;
        }
        int index = gradeToIndex(grade_str);
        all_creadit += two;
        all_grade += two * credit[index];
    }
    // cout << all_grade  << " " << all_creadit << "\n";
    cout << all_grade / all_creadit  << "\n";





    
}