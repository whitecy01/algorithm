#include <iostream>
#include <algorithm>
using namespace std;

int n;
pair<int, int> s[100005]; // schedule, 정렬의 편의를 위해 {끝 시간, 시작 시간}으로 저장

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for(int i = 0; i < n; i++)
    cin >> s[i].second >> s[i].first;
  sort(s,s+n); 
  // for (int i = 0; i < n; i++)
  // {
  //   cout << "first : " << s[i].first << " second : " << s[i].second << "\n"; 
  // }

  int t = 0;
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (t > s[i].second){ continue;}
    t = s[i].first;
    count++;

  }
  cout << count << "\n";

}