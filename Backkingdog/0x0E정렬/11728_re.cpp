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
  int temp;
  for (int i = 0; i < n; i++){cin >> temp; a[i] = temp;}
  for (int i = 0; i < m; i++){cin >> temp; b[i] = temp;}
  int aidx = 0; int bidx = 0;
  for (int i = 0; i < n+m; i++)
  {
    if (aidx == n) c[i] = b[bidx++];
    else if (bidx == m) c[i] = a[aidx++];
    else if (a[aidx] <= b[bidx]) c[i] = a[aidx++];
    else c[i] = b[bidx++];
  }

  for (int i = 0; i < n+m; i++){cout << c[i] << " ";}
  
}









