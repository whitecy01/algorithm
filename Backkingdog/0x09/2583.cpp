// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int m,n,k;
int board[102][102] = {0};
bool views[102][102] = {0};
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> m >> n >> k;
  for (int i = 0; i < k; i++)
  {
    int left_X, left_Y, right_X, right_Y;
    cin >> left_X >> left_Y >> right_X >> right_Y;
    for (int w = left_X; w < right_X; w++)
    {
      for (int q = left_Y; q < right_Y; q++)
      {
        board[w][q] = 1;
      }
      
    }
  }

  int count = 0;
  vector<int> vec;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (board[i][j] == 0 && views[i][j] == 0){
        // cout << "i :" << i << " j : " << j << "\n";
        int size = 0;
        count++;
        queue<pair<int, int> > Q;
        views[i][j] = 1;
        Q.push({i,j});
        while (!Q.empty())
        {
          auto cur = Q.front(); Q.pop();
          size++;
          for (int idx = 0; idx < 4; idx++)
          {
            int nx = cur.first + dx[idx];
            int ny = cur.second + dy[idx];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (board[nx][ny] != 0 || views[nx][ny] != 0) continue;
            views[nx][ny] = 1;
            Q.push({nx, ny});
          }
        }
        vec.push_back(size);
      }
    }
  }
  cout << count << "\n";
  sort(vec.begin(), vec.end());
  for (auto a : vec)
  {
    cout << a << " ";
  }
    

  
  
}