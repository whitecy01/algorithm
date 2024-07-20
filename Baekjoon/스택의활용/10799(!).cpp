#include <iostream>
#include <stack>

using namespace std;

int main(){
    string str;

    stack<char> sta;
    int answer = 0;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
            sta.push(str[i]);
        else 
        {
            if (str[i - 1] == '(')
            {
                sta.pop();
                answer += sta.size();
            }
            else 
            {
                sta.pop();
                answer++;
            }
        }
    }
    cout << answer << "\n";
    
}