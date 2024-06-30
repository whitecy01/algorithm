#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    int count = 0;
    int j = 0;
    cin >> n;
    string str;
    bool flag; 
    bool check;

    for (int i = 0; i < n; i++)
    {
        j = 0;
        check =false;
        vector<char> temp;
        cin >> str;
        while (str[j])
        {
            flag = false;
            auto it = std::find(temp.begin(), temp.end(), str[j]);
            // cout << "here\n";c
            if (it == temp.end()) 
            {
                // cout<< "str[j] : " << str[j] << "\n";
                temp.push_back(str[j]);

                int k = j + 1;
                if (str.length() <= k)
                {
                    break;
                }
                while (str[k])
                {
                  
                    // cout << "str[k] : " << str[k] << "\n";
                   if (str[j] != str[k])
                   {
                        flag = true;
                   }
                   else
                   {
                        if (flag == true)
                        {
                            check =true;
                            break;
                        }
                   }
                   k++;
                }
                  
            } 
            if (check ==true)
                break; 
            j++;
            
        }
         if (check== false)
                count++;
    }
        cout << count << "\n";
}

// https://www.acmicpc.net/source/16168212