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
  sort(s,s+n); // 먼저 끝나는 시간을 비교하고, 끝나는 시간이 동일하면 시작 시간 순으로 정렬

    int ans = 0;
    int t = 0;
  for (int i = 0; i < n; i++)
  {
    if (t > s[i].second) continue;
    ans++;
    t = s[i].first;
  }
  cout << ans << "\n";
   
}