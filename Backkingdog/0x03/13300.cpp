// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, k, ans=0;
  int s[2][8]={0};  
  cin >> n >> k;
  // 학생 수 저장
  for (int i=0; i<n; ++i) {
    int a, b;
    cin >> a >> b;
    s[a][b]++;
  }

  for (int i=0; i<2; ++i) {
    for (int j=1; j<7; ++j) {
      ans += s[i][j] / k;
      if (s[i][j] % k) ++ans;
    }
  }
  cout << ans << "\n";
}


// // Authored by : whitecy
// // Co-authored by : -
// // http://boj.kr/****************
// #include <bits/stdc++.h>
// using namespace std;

// int N, K;
// int s[2][7]={};  // 성별/반별 학생 수를 저장하는 배열


// int main(void){
//   ios::sync_with_stdio(0);
//   cin.tie(0);

//   cin >> N >> K;

//   memset(s, 0, sizeof(s)); // 배열을 0으로 초기화
//   for (int i = 0; i < N; i++)
//   {
//     int sex, grade;
//     cin >> sex >> grade;
//     s[sex][grade]++;
//   }
//   int ans = 0;
//   // 필요한 방의 개수 계산
//   for (int i=0; i<2; ++i) {
//     for (int j=1; j<7; ++j) {
//       // 배정에 필요한 만큼 방의 개수 추가
//       ans += s[i][j] / K;
//       // 학생이 남을 경우, 하나의 방이 더 필요하므로 방의 개수 추가
//       if (s[i][j] % K) ++ans;
//     }
//   }
//   cout << ans;


// }