// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int n, m;
int a[1000005], b[1000005], c[2000005];

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  cin >> m;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++)
  {
    cin >> b[i];
  }

  int n_idx = 0;
  int m_idx = 0;

  for (int i = 0; i < n + m; i++)
  {
    if (n_idx == n) c[i] = b[m_idx++];
    else if (m_idx == m) c[i] = a[n_idx++];
    else if (a[n_idx] >= b[m_idx]) c[i] = b[m_idx++];
    else c[i] =  a[n_idx++];
  }
  
  for (int i = 0; i < n + m; i++)
  {
    cout << c[i] << " ";
  }
  
}









