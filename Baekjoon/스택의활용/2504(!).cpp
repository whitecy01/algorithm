#include <stack>
#include <iostream>

using namespace std;
string a;
stack<char> sta;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> a;
    int sum = 0;
    int num = 1;
    for(int i=0;i<a.size();i++)
    {
        if (a[i] == '(')
        {
            sta.push(a[i]);
            num *= 2;
        }
        else if (a[i] == '[')
        {
            sta.push(a[i]);
            num *= 3;
        }
        else if (a[i] == ')')
        {
            if (sta.empty() || sta.top() != '(')
            {
                cout << "0\n";
                return 0;
            }
            if (a[i - 1] == '(') sum += num;
            sta.pop();
            num /= 2;
        }
        else if (a[i] == ']')
        {
            if (sta.empty() || sta.top() != '[')
            {
                cout << "0\n";
                return 0;
            }
            if (a[i - 1] == '[') sum += num;
            sta.pop();
            num /= 3;
        }
    }
    if(sta.empty()) cout << sum;
    else cout << 0;

 

    return 0;
}