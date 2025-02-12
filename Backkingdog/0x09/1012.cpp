// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int T;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1}; 

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> T;

  for (int i = 0; i < T; i++)
  {
    int n,m,k;
    cin >> m >> n >> k;
    int base[55][55] = {0};
    int vis[55][55];
    int x,y;
      
    queue<pair<int,int> > Q;
    for (int j = 0; j < k; j++) // 값 입력 받기
    {
      cin >> y >> x;
      base[y][x] = 1;
      vis[y][x] = 0;
      Q.push({y, x});
    }
    //BFS 진행

    for (int p = 0; p < n; p++)
    {
      for (int w = 0; w < m; w++)
      {
        cout << base[p][w] << " ";
      }
      cout << "\n";
    }
    cout << "===============\n";
    for (int p = 0; p < n; p++)
    {
      for (int w = 0; w < m; w++)
      {
        cout << vis[p][w] << " ";
      }
      cout << "\n";
    }
    
    int ans = 0;
    auto start = Q.front();
    vis[start.first][start.second] = 1;
    cout << "2===============2\n";
    
    // for (int p = 0; p < n; p++)
    // {
    //   for (int w = 0; w < m; w++)
    //   {
    //     cout << vis[p][w] << " ";
    //   }
    //   cout << "\n";
    // }
    while (!Q.empty())
    {
      auto check = Q.front(); Q.pop();
      // vis[check.first][check.second] = 1;
      cout << "Q.first : " << check.first << " Q.second : " << check.second << "\n";
      for (int q = 0; q < 4; q++)
      {
        int nx = check.first + dx[q];
        int ny = check.second + dy[q];
        // cout << "In --> nx : " << nx << " ny : " << ny << "\n";
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
        if (vis[nx][ny] != 0 || base[nx][ny] != 1) continue;
        vis[nx][ny] = 1;
        Q.push({nx, ny});
        // cout << "Out --> nx : " << nx << " ny : " << ny << "\n";
      }
    }
      cout << ans << "\n";

      for (int p = 0; p < n; p++)
      {
        for (int w = 0; w < m; w++)
        {
          cout << base[p][w] << " ";
        }
        cout << "\n";
      }
      cout << "===============\n";
      for (int p = 0; p < n; p++)
      {
        for (int w = 0; w < m; w++)
        {
          cout << vis[p][w] << " ";
        }
        cout << "\n";
      }
  }
  
}