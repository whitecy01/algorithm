// Authored by : whitecy
// Co-authored by : -
// http://boj.kr/****************
#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n;
vector<pair<int,int>> event;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for(int i = 0; i < n; i++){
    int s, t;
    cin >> s >> t;
    event.push_back({s, 1});
    event.push_back({t, -1});
  }
  sort(event.begin(), event.end());
  for (auto a: event)
  {
    cout << "event : " << a.first << " " <<a.second << "\n"; 
  }
  

}