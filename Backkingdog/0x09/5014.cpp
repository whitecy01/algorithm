// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int arr[1000002];
queue<int> Q;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int F,S,G,U,D;
  // cout << "\n";
  cin >> F >> S >> G >> U >> D;
  
  fill(arr, arr+F +  1, -1);
  arr[S] = 0;
  Q.push(S);
  while (!Q.empty())
  {
    auto cur = Q.front(); Q.pop();
    for (auto idx : {cur + U, cur - D})
    {
      // cout << "idx : " << idx << "\n";
      if (idx <= 0 || idx > F || arr[idx] != -1) continue;
      // cout << "out idx : " << idx << "\n";
      arr[idx] = arr[cur] + 1;
      Q.push(idx);
    }
  }
  // for (int i = 0; i <= F; i++)
  // {
  //   cout << arr[i] << " ";
  // }
  // cout << "\n";
  

  if (arr[G] == -1)
    cout << "use the stairs\n";
  else
    cout << arr[G] << "\n";
  


  
}