#include <iostream>
using namespace std;
int freq[26];
int main(){
    string str;
    cin >> str;

    for (auto c : str)
    {
        freq[c  - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        cout << freq[i] << " ";
    }
    
    
}