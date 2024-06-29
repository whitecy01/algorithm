#include <iostream>
using namespace std;
int main(){
    string str;
    
    cin >> str;
    int count = 0;
    int i = 0;
    int j = 0;

    while (str[i])
    {
        j = i + 1;
        if (str.length() <= j)
        {
            count++;
            break;
        }
        if (str[i] == 'c')
        {
            if (str[j] == '=' || str[j] == '-')
            {
                count++;
                i++;
            }
            else 
                count++;
        }
        else if (str[i] == 'd')
        {
            if(str[j] == 'z') 
            {
                if (str[j + 1] && str[j + 1] == '=')
                {
                    count++;
                    i = i + 2;
                }
                else 
                {
                    count = count + 2;
                    i++;
                }
            }
            else if (str[j] == '-') 
            {
                i++;
                count++;
            }
            else {
                count++;
            }
        }
        else if (str[i] == 'l' || str[i] == 'n')
        {    
            if (str[j] == 'j')
            {
                count++;
                i++;
            }
            else{
                count++;
            }
        }
        else if (str[i] == 's' || str[i] == 'z')
        {
            if (str[j] == '=')
            {
                count++;
                i++;
            }
            else{
                count++;
            }
        }
        else {count++;}
        i++;
    }
    cout << count << "\n";

}