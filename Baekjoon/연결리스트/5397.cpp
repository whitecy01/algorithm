#include <list>
#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;


    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        list<char> lst;
        list<char>::iterator iter;
        iter = lst.begin();
        for (int j = 0; j < str.length(); j++)
        {
            if (str[j] == '-') 
            {
                if (iter != lst.begin())
                {
                    iter--;
                    iter = lst.erase(iter);
                }
            }   
            else if (str[j] == '<')
            {
                if (iter != lst.begin())
                {
                    iter--;
                }
            }
            else if (str[j] == '>')
            {
                if (iter != lst.end())
                {
                    iter++;
                }
            }
            else
            {
                lst.insert(iter, str[j]);   
            }
        }
        for (auto c : lst)
        {
            cout << c;
        }
        cout << "\n";
        
    }
    
 

}