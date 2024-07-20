// 맞은 코드
#include <iostream>
#include <stack>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);


    string str;
    while (true)
    {

        getline(cin, str);
        if (str == ".")
            break;
        stack<char> sta;
        bool valid = true;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(' || str[i] == '[')
                sta.push(str[i]);
            else if (str[i] == ']' || str[i] == ')')
            {
                if (!sta.empty() &&  sta.top() == '(' && str[i] == ')')
                {
                    sta.pop();
                }
                else if (!sta.empty() &&  sta.top() == '[' && str[i] == ']')
                {
                    sta.pop();
                }
                else 
                {
                    valid = false;
                }
            }   
        }
        if (sta.empty() && valid == true)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    
}



//틀린 코드
//이 테스트 케이스 틀림
// ()))
// yes
// ())))
// yes
// #include <iostream>
// #include <stack>

// using namespace std;

// int main(){
//     cin.tie(NULL);
//     ios_base::sync_with_stdio(0);


//     string str;
//     while (true)
//     {
//         stack<char> sta;
//         getline(cin, str);
//         if (str == ".")
//             break;
     
//         for (int i = 0; i < str.length(); i++)
//         {
//             if (str[i] == '(' || str[i] == '[')
//                 sta.push(str[i]);
//             else if (!sta.empty() && (str[i] == ']' || str[i] == ')'))
//             {
//                 if (sta.top() == '(' && str[i] == ')')
//                 {
//                     sta.pop();
//                 }
//                 else if (sta.top() == '[' && str[i] == ']')
//                 {
//                     sta.pop();
//                 }
//                 else 
//                 {
//                     break;
//                 }
//             }   
//         }
//         if (sta.empty())
//             cout << "yes\n";
//         else
//             cout << "no\n";
//     }
    
// }