// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  while (1)
  {
    string temp;
    getline(cin, temp);
    // cin >> temp;
    if (temp == ".") break;
    // if (temp[temp.size() - 1] != '.') continue;
    stack<char> sta;
    // cout << "temp : " << temp.size() << "\n";
    bool check = false;
    for (int i = 0; i < temp.size(); i++)
    {
      if (temp[i] == '[' || temp[i] == '(' ) {sta.push(temp[i]);}
      else if (temp[i] == ']' || temp[i] == ')' ) 
      {
        if (!sta.empty() && sta.top() == '[' && temp[i] == ']') 
        { 
          sta.pop();;
        }
        else if (!sta.empty() && sta.top() == '(' && temp[i] == ')')  
        { 
          sta.pop();
        }
        else check = true;
        
        // cout << "pop idx : " << i << "\n";
      }
      // else break;
    }
    if (sta.empty() && !check) cout << "yes\n";
    else cout << "no\n";

  }
  
  
}