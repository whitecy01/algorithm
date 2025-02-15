// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  //1. '(' 문자열은 push 
  //2. ')' 문자는 sta.top과 비교하여 맞으면 pop 
  //3. 종료되면 스택의 empty를 통해 확인 + 닫은 괄호는 스택에 push가 안 되니 남는 거를 체크해줄 거 필요
  for (int i = 0; i < n; i++)
  {
    string temp;
    cin >> temp;
    stack<char> sta;
    bool check = true;
    for (int j = 0; j < temp.size(); j++)
    {
      if (temp[j] == '(') { sta.push(temp[j]);}
      else if (!sta.empty() && temp[j] == ')' && sta.top() == '('){
        // cout << "POP j : " << j << "\n";
        sta.pop();
      }
      else check = false;
    }
    if (sta.empty() && check) cout << "YES\n";
    else cout << "NO\n";
    

  }
  
}