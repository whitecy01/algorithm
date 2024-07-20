#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n;
    cin >> n;

    string str;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        stack<char> sta;
        for (int q = 0; q < str.length(); q++)
        {
            if(!sta.empty() && (sta.top() == str[q]))
            {
                sta.pop();
            }
            else
                sta.push(str[q]);
        }
        if (sta.empty() == 1)//stack이 비어있는 게 1
            count++;

        // int size = sta.size();
        // for (int s; s < size; s++)
        // {
        //     cout << sta.top() << " ";
        //     sta.pop();
        // }
        //     cout  << "\n";
    }
    cout << count << "\n";
}