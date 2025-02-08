// Authored by : whitecy
// Co-authored by : -
// http://boj.kr/****************
#include <bits/stdc++.h>
using namespace std;


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string str;
    list<char> lst;
    list<char>::iterator it;
    it = lst.begin();
    cin >> str;
    int str_size = str.size();
    int j = 0;
    while (j < str_size)
    {
      if (str[j] == '<'){
        if (it != lst.begin()) it--;
      }
      else if (str[j] == '>'){
        if (it != lst.end()) it++;
      }
      else if(str[j] == '-'){
      if (it != lst.begin()){
            it--;
            it = lst.erase(it);
          }
      }
      else {
        lst.insert(it, str[j]);
      }
      j++;
    }
    for (auto c : lst)
    {
        cout << c;
    }
    cout << "\n";
  }

  
  
}