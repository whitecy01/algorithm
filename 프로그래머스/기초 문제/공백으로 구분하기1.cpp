#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string str;
    for (int i = 0; i < my_string.size(); i++){
        if (my_string[i] != ' '){
            str += my_string[i];
        }
        else {
            answer.push_back(str);
            str = "";
        }
    }
    answer.push_back(str);
    return answer;
}