// Authored by : whitecy
// Co-authored by : -
// http://boj.kr/****************
#include <bits/stdc++.h>
using namespace std;

int n;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string a,b;
    int arr[26] = {0};
    int brr[26] = {0};
    cin >> a >> b;
    if (a.size() != b.size())
    {
      cout << "Impossible\n";
      continue;
    }
    for (int i = 0; i < a.size(); i++)
    {
      arr[a[i] - 'a']++;
    }
    for (int i = 0; i < b.size(); i++)
    {
      brr[b[i] - 'a']++;
    }
    bool flag = false;
    for (int i = 0; i < 26; i++)
    {
      if (arr[i] != brr[i]){
        cout << "Impossible\n";
        flag = true;
        break;
      }
    }
    if (flag == false)
      cout << "Possible\n";
  }
}