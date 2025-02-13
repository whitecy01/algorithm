// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

string house[30];
int views[32][32];

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> house[i];
  }

  vector<int> vec;
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (house[i][j] == '1' && views[i][j] == 0){
        count++;
        int size = 0;
        queue<pair<int,int> > Q;
        views[i][j] = 1;
        Q.push({i,j});
        while (!Q.empty())
        {
          auto cur = Q.front(); Q.pop();
          // cout << " cur first : " << cur.first << " cur second : " << cur.second << "\n";
          size++;
          for (int idx = 0; idx < 4; idx++)
          {
            int height = cur.first + dx[idx];
            int width = cur.second + dy[idx];
            if (height < 0 || height >= n || width < 0 || width >= n) continue;
            if (views[height][width] != 0 || house[height][width] == '0') continue;
            views[height][width] = 1;
            Q.push({height, width});
          }
        }
        vec.push_back(size);
      }
    }
  }
  sort(vec.begin(), vec.end());
  cout << count << "\n";
  for (auto a : vec)
  {
    cout << a << "\n";
  }
  
  

  
}