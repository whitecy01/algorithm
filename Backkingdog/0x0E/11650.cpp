// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

bool com(pair<int,int> a, pair<int,int> b){
  if (a.first ==  b.first)
    return a.second < b.second;
  return a.first < b.first;
}

vector <pair<int, int> > V;
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x,y;
    cin >> x >> y;
    V.push_back({x, y});
  }

  sort(V.begin(), V.end(), com);
  
  for (auto b : V)
  {
    cout << b.first << " " << b.second << "\n";
  }
  
  
}