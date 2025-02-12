// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n,m;
int arr[502][502];
bool view[502][502];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int cnt = 0;
int ans_size;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }
  int all = 0;
  int size = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (arr[i][j] == 1 && view[i][j] == false){
        int temp = 0;
        queue<pair<int,int>> Q;
        view[i][j] = true;
        Q.push({i,j});
        size++;
        // cout << " i : " << i << " j : " << j << "\n";
        while (!Q.empty())
        {
          auto cur = Q.front(); Q.pop();
          for (int k = 0; k < 4; k++)
          {
            int nx = cur.X + dx[k];
            int ny = cur.Y + dy[k];
            if (nx >= n || nx < 0 || ny >= m || ny < 0) continue;
            if (view[nx][ny] != false || arr[nx][ny] != 1) continue;
            view[nx][ny] = true;
            Q.push({nx,ny});
          }
          temp++;
        }
        all = max(all, temp);
      }
    }
  }
  cout << size << "\n";
  cout << all << "\n";
  
}