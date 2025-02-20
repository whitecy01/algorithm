// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int main(void) {
  int n;
  cin >> n;
  vector< pair<int, int>> vec;

  int a,b,c,d;
  for (int i = 0; i < n; i++)
  {
    cin >> a >> b >> c >> d;
    vec.push_back({a * 100 + b, c * 100 + d});
  }
  int t = 301;
  int ans = 0;
  while (t < 1201)
  {
    int nxt_t = t;
    for (int i = 0; i < n; i++)
    {
      if (vec[i].X <= t && vec[i].Y > nxt_t){
        nxt_t = vec[i].Y;
      }
    }
    if (t == nxt_t)
    {
      cout << "0\n";
      return 0;
    }
    ans++;
    t = nxt_t;
    
  }
  cout << ans << "\n";
  
}


// #define X first
// #define Y second

// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int n;
//   cin >> n;
//   vector<pair<int, int>> flower;
//   for (int i = 0; i < n; i++) {
//     int sm, sd, em, ed;
//     cin >> sm >> sd >> em >> ed;
//     flower.push_back({sm * 100 + sd, em * 100 + ed}); // 날짜는 대충 파싱해도 됨
//   }

//   int t = 301; // 현재 시간
//   int ans = 0; // 선택한 꽃의 개수
//   while (t < 1201) {
//     int nxt_t = t; // 이번에 추가할 꽃으로 인해 변경된 시간

//     for(int i = 0; i < n; i++){// 모든 꽃을 확인
//       cout << "t : " << t << " nxt_t " << nxt_t << "\n";
//       // 현재 날짜 t 이전에 피고, 끝나는 날짜가 nxt_t보다 큰 꽃 찾기
//       if(flower[i].X <= t && flower[i].Y > nxt_t)
//         nxt_t = flower[i].Y; // 현재 선택한 꽃으로 인해 유지할 수 있는 최대 날짜 갱신
//     }

//     // 만약 nxt_t가 변경되지 않았다면, 더 이상 연결할 꽃이 없다는 의미
//     if(nxt_t == t){ // 시간 t에서 더 전진이 불가능
//       cout << 0;
//       return 0;
//     }
//     ans++; // 선택한 꽃 개수 증가
//     t = nxt_t;  // 현재 시간을 가장 늦게까지 유지할 수 있는 날짜로 업데이트
//   }
//   cout << ans;
// }