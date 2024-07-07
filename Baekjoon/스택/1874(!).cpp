// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;

// int main(){
//     stack<int> sta;
//     vector<char> oper;

//     int n; 
//     cin >> n;

//     vector<int> compare(n);

//     for (int i = 0; i < n; i++) {
//         cin >> compare[i];
//     }

//     int current = 1;

//     for (int i = 0; i < n; i++)
//     {
//         int target = compare[i];
//         while (current <= target)
//         {
//             sta.push(current);
//             oper.push_back('+');
//             current++;
//         }

//         if (sta.top() == target)
//         {
//             sta.pop();
//             oper.push_back('-');
//         }
//         else {
//             cout << "NO" << endl;
//             return 0;
//         }
//     }
//      for (char op : oper) {
//         cout << op << "\n";
//     }
// }
// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;

// int main(){
//     stack<int> sta;
//     vector<char> oper;

//     int n; 
//     cin >> n;

//     vector<int> compare(n);

//     for (int i = 0; i < n; i++) {
//         cin >> compare[i];
//     }

//     int current = 1;

//     for (int i = 0; i < n; i++)
//     {
//         int target = compare[i];
//         while (current <= target)
//         {
//             sta.push(current);
//             oper.push_back('+');
//             current++;
//         }

//         if (sta.top() == target)
//         {
//             sta.pop();
//             oper.push_back('-');
//         }
//         else {
//             cout << "NO" << endl;
//             return 0;
//         }
//     }
//      for (char op : oper) {
//         cout << op << "\n";
//     }
// }

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int arr_idx = 0;

int main(){
    int n;
    cin >> n;

    int compare[n];
    int arr[n];
    vector<char> anw;

    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        compare[i] = num;
    }
    for (int i = 1; i <= n; i++)
    {
        arr[i - 1] = i;
    }
    int i = 0;
    int check;
    check = 0;
    stack<int> sta;
    while (i < n)
    {
        check = compare[i];

        if (sta.empty() == 0 && check == sta.top())
        { 
            while (true)
            {
                if (sta.empty() == 0 && (compare[i] == sta.top()))
                {
                    // cout << "-" << "\n";
                    anw.push_back('-');
                    sta.pop();
                    
                    i++;
                }
                else 
                {
                    break;
                    // cout << "NO\n";
                    // return 0;
                }
            }
        }
        else 
        {
            while (true)
            {
                sta.push(arr[arr_idx]);
                // cout << "+\n";
                anw.push_back('+');
                if (arr[arr_idx] == compare[i])
                {
                    arr_idx++;
                    break;
                }
                arr_idx++;
            }
        }
    }
    if (sta.empty() == 1)
    {
        for (char op : anw) {
            cout << op << "\n";
        }
    }
    else 
        cout << "NO\n";
    return 0;
    // int chekc2= sta.size();
    // for (int i = 0; i < chekc2; i++)
    // {
    //     cout << sta.top() << "\n";
    //     sta.pop();
    // }
    
}