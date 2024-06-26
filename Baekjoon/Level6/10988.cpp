#include <iostream>
using namespace std;
int main(){
    string str;
    cin >> str;

    // if (str.compare("level") == 0 || str.compare("noon") == 0)
    //     cout << "1\n";
    // else 
    //     cout << "0\n"; 

    int i = 0;
    int last = str.length() - 1;
    while (str[i])
    {
        if (i == last)
        {
            cout << "1\n";
            return 0;
        }
        if (str[i] != str[last])
        {
            cout << "0\n";
            return 0;
        }
        i++;
        last--;
    }
    cout << "1\n";
}