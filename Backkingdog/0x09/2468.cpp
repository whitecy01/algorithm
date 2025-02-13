// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int arr[103][103] = {0};
int views[103][103] = {0};

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }

  int max_height = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      max_height = max(max_height, arr[i][j]);
    }
  }
  int ans = 0;
  for (int h = 0; h <= max_height; h++)
  {
    int size = 0;
    memset(views, 0, sizeof(views));
    queue<pair<int,int> > Q;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (arr[i][j] > h && views[i][j] == 0){
          size++;
          views[i][j] = 1;
          Q.push({i, j});
          while (!Q.empty())
          {
            auto cur = Q.front(); Q.pop();
            for (int idx = 0; idx < 4; idx++)
            {
              int nx = cur.first + dx[idx];
              int ny = cur.second + dy[idx];
              if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
              if (arr[nx][ny] <= h || views[nx][ny] != 0) continue;
              views[nx][ny] = 1;
              Q.push({nx, ny}); 
            }
          }
        }
      }
    }
    ans = max(ans, size);
  }
  
  


  
  cout << ans << "\n";
}