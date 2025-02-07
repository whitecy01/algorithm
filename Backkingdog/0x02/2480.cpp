// Authored by : whitecy
// Co-authored by : -
// http://boj.kr/****************
#include <bits/stdc++.h>
using namespace std;

#include <algorithm>
int a[4];
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  for (int i = 0; i < 3; i++)
  {
    cin >> a[i];
  }

  if ((a[0] == a[1]) &&  (a[0]== a[2]))
    cout << 10000 + a[0] * 1000;
  else if ((a[0] != a[1]) && (a[1] != a[2]) && (a[0] != a[2]) )
  {
    sort(a, a+3);
    cout << a[2] * 100;
  } 
  else if (a[0] == a[1] || a[0] == a[2])
    cout << 1000 + a[0] * 100;
  else if (a[1] == a[2] )
    cout << 1000 + a[1] * 100; 

}