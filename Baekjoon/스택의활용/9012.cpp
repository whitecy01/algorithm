#include <iostream>
#include <stack>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;

    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        stack<char> sta;
        bool valid = true;
        for (auto s : str)
        {
            if (s == '(')
                sta.push(s);
            else
            {
                if (!sta.empty() && s == ')')
                    sta.pop();
                else 
                {
                    valid = false;
                    break;
                }
            }
        }
        if (sta.empty() == 1 && valid == true)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}