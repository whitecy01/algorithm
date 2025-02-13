// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int check[100002];
int N, K;


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> N >> K;

  queue<int> Q;
  Q.push(N);
    fill(check, check+100001, -1);
  check[N] = 0;
  while (check[K] == -1)
  {
    int cur = Q.front(); Q.pop();
    for (int nxt : {cur - 1 , cur + 1, 2 * cur})
    {
      if (nxt < 0 || nxt > 100000) continue;
      if (check[nxt] != -1) continue;
      check[nxt] = check[cur] + 1;
      Q.push(nxt);
    }
  }
  cout << check[K] << "\n";
  
}