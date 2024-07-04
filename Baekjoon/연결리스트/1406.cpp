#include <list>
#include <iostream>
#include <iterator>

//

using namespace std;
int main(){
    list<char> lst;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        lst.push_back(str[i]);
    }
    list<char>::iterator iter;
    iter = lst.end();
    
    int n;
    cin >> n;

    char input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;

        // cout << input << "\n";
        if (input == 'P') {
            char add;
            cin >> add;
            lst.insert(iter, add);
        }
        else if (input == 'D'){
            if (iter != lst.end()) iter++;
        }
        else if (input == 'B'){
             if (iter != lst.begin()){
                iter--;
                iter = lst.erase(iter);
                cout<< *iter << "\n";
             }
        }
        else if (input == 'L'){
            if (iter != lst.begin()) iter--;
            // iter--;
            // cout << *iter << "\n";
        }
    }

    for (auto i : lst)
    {
        cout << i;
    }
    
}