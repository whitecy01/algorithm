#include <iostream>
#include <iterator>
#include <algorithm>
#include <string>
using namespace std;

//문자열 값 추출 at 
int main(){
    // cin.tie(NULL);
    // ios_base::sync_with_stdio(false);
    int n;

    cin >> n;
   

    for (int i = 0; i < n; i++)
    {
         string str;
         cin >> str;
        string::iterator start = str.begin();
        cout << *start << str.at(str.length() - 1) << "\n";
        // cout << str << "\n";
    }
    

}