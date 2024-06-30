#include <iostream>
using namespace std;
int arr[26];

int main(){
    fill(arr, arr+26, -1);

    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (arr[str[i] - 'a'] == -1)
            arr[str[i] - 'a'] = i; 
    }
    for (int i = 0; i < 26; i++)
    {
        cout << arr[i] << " ";
    }
    
}