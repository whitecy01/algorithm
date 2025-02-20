// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  string str;
  cin >> str;

  int temp = 0;
  int ans = 0;
  int sign = 1;
  for (int i = 0; i < str.size(); i++)
  { 
    if (str[i] == '-' || str[i] == '+')
    {
      ans += temp * sign;
      if (str[i] == '-') sign = -1;
      temp = 0;
    }
    else
      temp = temp * 10 + (str[i] - '0');    
  }
  ans += temp * sign; 
  cout << ans << "\n";
  
}