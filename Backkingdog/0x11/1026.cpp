// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int A[100];
int B[100];
int n;

int com(int a, int b){
  return a > b;
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> B[i];
  }

  sort(A, A+n);
  sort(B, B+n, com);


  // for (int i = 0; i < n; i++)
  // {
  //   cout << A[i] << " ";
  // }
  // cout << '\n';
  // for (int i = 0; i < n; i++)
  // {
  //   cout << B[i] << " ";
  // }

  int ans = 0;

  for (int i = 0; i < n; i++)
  {
    ans += A[i] * B[i];
  }
  cout << ans << "\n";
  
  
}