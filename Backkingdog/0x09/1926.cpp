// Authored by : whitecy
// Co-authored by : -
// http://boj.kr/****************
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
  for (int i = 0; i < n; i++) { for (int j = 0; j < m; j++) { cin >> arr[i][j]; }}
  // for (int i = 0; i < n; i++) { for (int j = 0; j < m; j++) { cout << arr[i][j] << " "; } cout << "\n";}
  // for (int i = 0; i < n; i++) { for (int j = 0; j < m; j++) { cout << view[i][j] << " "; } cout << "\n";}
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (arr[i][j] != 0 && view[i][j] == 0) //여기서부터 알고리즘 시작
      {
        queue<pair<int,int>> Q;
        int temp = 0;
        view[i][j] = 1;
        Q.push({i, j});
        cnt++;
        while (!Q.empty())
        {
          pair<int,int> cur = Q.front();
          Q.pop();
          for (int k = 0; k < 4; k++)
          {
            int nx = cur.X + dx[k];
            int ny = cur.Y + dy[k];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (view[nx][ny] || arr[nx][ny] != 1) continue;
            view[nx][ny] = 1;
            Q.push({nx,ny});
          }
          temp++;
        }

        if (ans_size <= temp)
          ans_size = temp;
      }
    }
  }

  cout << cnt << "\n";
  cout << ans_size << "\n";
  
}