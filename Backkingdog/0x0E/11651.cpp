// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;


bool com(pair<int,int> a, pair<int,int> b){
  if (a.second == b.second) return a.first < b.first;
  return a.second < b.second;
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<pair<int,int>> V;
  for (int i = 0; i < n; i++)
  {
    int a,b;
    cin >> a >> b;
    V.push_back({a,b});
  }

  sort(V.begin(), V.end(), com);
  for (auto b : V)
  {
    cout << b.first << " " << b.second << "\n";
  }
  


   
}