#include <vector>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int ans(vector<vector<string>> table, string search) {
    // 1. search 문자열을 공백 기준으로 파싱하여 검색할 값들만 저장
    istringstream ss(search);
    vector<string> search_values;
    string word;
    
    while (ss >> word) {
        cout <<  word << "\n";
        if (!(ss >> word)) break;  // 짝수 번째 단어만 가져오기 (검색할 값)
        cout <<  word << "\n";
        search_values.push_back(word);
    }
    for (auto temp : search_values)
    {
        cout << temp << " ";
    }
    

    // 2. 테이블에서 검색어 값들이 포함된 행 개수 계산
    int total_count = 0;
    cout << "table size  : " << table.size() << "\n";
    for (size_t i = 1; i < table.size(); i++) {  // 첫 번째 행(헤더)은 제외
        for (size_t j = 0; j < table[i].size(); j++) {  
            if (table[i][j] == search_values[0] || table[i][j] == search_values[1]) {  
                total_count++;  // 두 검색어 중 하나라도 있으면 카운트 증가
            }
        }
    }
    
    return total_count;
}

int main() {
    vector<vector<string>> table = {
        {"name", "category", "rentable"},
        {"pen", "stationery", "yes"},
        {"desk", "furniture", "no"},
        {"sss", "stationery", "yes"}
    };

    string search = "category stationery rentable yes";
    
    int result = ans(table, search);
    cout << "Result: " << result << endl;  // 출력: 2

    return 0;
}
