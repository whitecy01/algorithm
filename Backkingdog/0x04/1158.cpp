// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, k;
  cin >> n >> k;
  list<int> lst;
  for (size_t i = 1; i <= n; i++)
  {
      lst.push_back(i);
  }
  cout << "<";
  while (lst.size() > 1)
  {
    for (int i = 0; i < k - 1; i++)
    {
      int tmp = lst.front();
      lst.pop_front();
      lst.push_back(tmp);
    }
    cout << lst.front() << ", ";
    lst.pop_front();
  }
  cout << lst.front() << ">\n";
  
}