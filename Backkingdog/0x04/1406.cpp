// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  list<char> lst;
  string str;
  cin >> str;
  for (int i = 0; i < str.length(); i++)
  {
      lst.push_back(str[i]);
  }
  list<char>::iterator iter;
  iter = lst.end();

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    char temp;
    cin >> temp;
    if (temp == 'L'){
      if (iter != lst.begin()) iter--;
    }
    else if (temp == 'D')
    {
      if (iter != lst.end()) iter++;
    }
    else if (temp == 'B'){
      if (iter != lst.begin()){
            iter--;
            iter = lst.erase(iter);
        //      list<char>::iterator prev = ;
        // prev--;
        // lst.erase(prev);
          }
    }
    else if (temp == 'P'){
      char add;
      cin >> add;
      lst.insert(iter, add);
    }
  }
      for (auto i : lst)
    {
        cout << i;
    }
}