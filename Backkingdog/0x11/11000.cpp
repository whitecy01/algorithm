// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;


int n;
vector<pair<int, int> > cls  ;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int first,second;
    cin >> second >> first;
  
    cls.push_back({first, second}); 
  }
  sort(cls.begin(), cls.end());
  // for (auto cur : cls)
  // {
  //   cout << "cur first : " << cur.first << " second : " << cur.second << "\n";
  // }
  int t = 0;
  int count = 0;
  int endt = 0;
  for (int i = 0; i < n; i++)
  {
    if (endt <= cls[i].second){
      // t = cls[i].second;
      endt = cls[i].first;
      count++;
    }
  }
  cout << count << "\n";
    

}