#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    for (int i = 0; i < delete_list.size(); i++){
        auto it = find(arr.begin(), arr.end(), delete_list[i]);
        if (it == arr.end()){
            continue;
        }
        else {
            arr.erase(it);
        }
    }
    answer = arr;
    return answer;
}