#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;

    int arr[26];
    int idx = 0;
    char en[26];
    for (char i = 97; i < 123; i++)
    {
        en[idx] = i;
        idx++;
    }
    // for (int i = 0; i < 26; i++)
    // {
    //     cout << en[i] << " ";
    // }

    int in = 0;
    fill(arr, arr +26, 0);
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (str[i] == en[j])
            {
                in = j;
                break;
            }
        }
        arr[in]++;
        // cout << in;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << arr[i] << " ";
    }
    
}