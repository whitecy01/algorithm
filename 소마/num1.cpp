#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <iostream>

using namespace std;

vector<int> ans(vector<int> a, vector<int> b) {
    for (int i = 0; i < 3; i++) {  // 총 3번 반복
        int arr[101] = {0};  // a의 원소 등장 횟수를 저장하는 배열 (100 이하의 값이라고 가정)
        
        // 1. a의 각 원소 개수를 저장
        for (int j = 0; j < a.size(); j++) {
            arr[a[j]]++;
        }

        for (auto b : a)
        {
            cout << b << " ";
        }
        cout << "\n";
        // 2. 중복되지 않는 원소는 +1을 수행하여 a를 변경
        for (int j = 0; j < a.size(); j++) {
            if (arr[a[j]] == 1) {  // 한 번만 등장한 경우
                a[j]++;  // +1 연산 수행
            }
        }

        for (int idx = 0; idx < 10; idx++)
        {
            cout << arr[idx] << " ";
        }
        cout << "\n";
        
        for (int idx = 0; idx < b.size(); idx++)
        {
            auto it = find(a.begin(), a.end(), b[idx]);
            if (it != a.end()){
                cout << "here\n";
                a.erase(it);
            }
        }
    }

    return a;  // 최종적으로 변경된 a 반환
    
}

int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(3);
    a.push_back(4);
    vector<int> b;
    b.push_back(6);
    b.push_back(7);
    b.push_back(8);
    b.push_back(9);
    b.push_back(10);
    vector<int> answer = ans(a,b);
    for (auto b : answer)
    {
        cout << b << " ";
    }
    
}