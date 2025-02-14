// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  stack<int> sta;
  for (int i = 0; i < n; i++)
  {
    string command;
    cin >> command;
    if (command == "push"){
      int num;
      cin >> num;
      sta.push(num);
    }
    else if (command == "pop"){
      if (!sta.empty()) {cout << sta.top() << "\n"; sta.pop();}
      else cout << "-1\n";
    }
    else if (command == "top"){
      if (!sta.empty()) cout << sta.top() << "\n";
      else cout << "-1\n";
    }
    else if (command == "size"){
      cout << sta.size() << "\n";
    }
    else if (command == "empty"){
      cout << sta.empty() << "\n";
    }
  }
  
}