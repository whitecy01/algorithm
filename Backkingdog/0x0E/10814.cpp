#include <iostream>
#include <map>

using namespace std;

multimap<int, string> mmap;
int main(){
    int n;
    string name;

    cin >> n;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp >> name;
        mmap.insert(pair<int,string>(temp, name));
    }

     // 입력된 데이터 확인 (출력 부분 추가)
    for (auto &p : mmap) {
        cout << p.first << " " << p.second << '\n';
    }

}