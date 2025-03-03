#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    for(int i = 0; i < str2.size(); i++){
        if (str1[0] == str2[i]){
            int idx = i;
            int j = 0;
            for(; j < str1.size(); j++){
                if (str2[idx] != str1[j]){
                    break;
                }
                idx++;
            }
            if (j == str1.size()){
                answer = 1;
                break ;
            }
        }
    }
    return answer;
}