#include <string>
#include <vector>
#include <cstdlib>
#include <iostream>

using namespace std;

int solution(string number) {
    int answer = 0;
    long long temp = 0;
    for (int i = 0; i < number.size(); i++){
        temp += (number[i] - '0');
    }
    answer = temp % 9;
    return answer;
}