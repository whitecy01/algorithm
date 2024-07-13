#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;
    string arr;
    unsigned int arr_size;
    for (int i = 0; i < n; i++)
    {
        deque<int> de;
        cin >> str;
        cin >> arr_size;
        cin >> arr;

        //파싱
        // string num = "";
        // for (char c : arr) {
        //     if (isdigit(c)) {
        //         num += c;
        //     } else if (!num.empty()) {
        //         de.push_back(stoi(num));
        //         num = "";
        //     }
        // }

//--------------------------------

        // int j = 1;
        // int num = 0;
        // while (j + 1< arr.size())
        // {
        //     if (arr[j] == ',')
        //     {
        //         de.push_back(num);
        //         num = 0;
        //     }
        //     else
        //     {
        //         num = num * 10 + (arr[j] - '0');
        //         // cout << "num : " << num << "\n";
               
        //     }
        //     j++;
        // }
        // if (num != 0)
        //     de.push_back(num);
        
        // for (auto c : de)
        // {
        //     cout << c << " ";
        // }
        

//--------------------------------
        //초본
        int j = 0;
        while (true)
        {
            int num = 0;
            // cout << "here" << "\n";
                //    cout << "here\n";
            while (arr[j])
            {
                if ((arr[j] >= '0' && '9' >= arr[j]))
                    break;
                j++;
            }
            // cout << "j : " << j << "\n";
            while (arr[j] && (arr[j] >= '0' && '9' >= arr[j]))
            {
                num = num * 10 + (arr[j] - '0');
                // cout << "num : " << num << "\n";
                j++;
            }
            if (num != 0)
                de.push_back(num);
            if (arr_size == de.size())
                break;
        }



        // cout << "here\n";
        
        bool reverse = false;
        bool error = false;
            // cout << "here\n";
        for (unsigned int j = 0; j < str.length(); j++)
        {
            // cout << "here2\n";
            //   cout << "here\n";
            if (str[j] == 'R')
            {
                reverse = !reverse;
            }
            else if (str[j] == 'D'){
                if (de.empty()) {
                    cout << "error\n";
                    error = true;
                    break;
                } else {
                    // cout << "here\n";
                    if (reverse) {
                        de.pop_back();
                    } else {
                        de.pop_front();
                    }
                }
            }
        }
        
        if (!error) {
            cout << "[";
            while (!de.empty()) {
                if (reverse) {
                    cout << de.back();
                    de.pop_back();
                } else {
                    cout << de.front();
                    de.pop_front();
                }
                if (!de.empty()) {
                    cout << ",";
                }
            }
            cout << "]\n";
        }
        // else
        //     cout << "error\n";
        // for (unsigned int k = 0; k < de.size(); k++)
        // {
        //    if (k == 0)
        //     cout << "["; 
        //    cout << de[k];
        //    if (k != de.size() - 1)
        //         cout << ",";
        //     else
        //         cout << "]";
        // }
        // cout << "\n";
    }
    
}

//시간 초과
// #include <iostream>
// #include <deque>
// #include <algorithm>

// using namespace std;

// int main(){
//     int n;
//     cin >> n;


//     string str;
//     string arr;
//     unsigned int arr_size;
//     for (int i = 0; i < n; i++)
//     {
//         deque<int> de;
//         cin >> str;
//         cin >> arr_size;
//         cin >> arr;
//         if (arr_size == 0)
//         {
//             cout << "error\n";
//             continue;
//         }
//         //파싱
//         int j = 0;
//         while (true)
//         {
//             int num = 0;
//             // cout << "here" << "\n";
//             while (true)
//             {
//                 if ((arr[j] >= '0' && '9' >= arr[j]))
//                     break;
//                 j++;
//             }
//             // cout << "j : " << j << "\n";
//             while (arr[j] && (arr[j] >= '0' && '9' >= arr[j]))
//             {
//                 num = num * 10 + arr[j] - '0';
//                 // cout << "num : " << num << "\n";
//                 j++;
//             }
    
//             de.push_back(num);
//             if (arr_size == de.size())
//                 break;
//         }
//         for (unsigned int j = 0; j < str.length(); j++)
//         {
//             if (str[j] == 'R')
//             {
//                 if (!de.empty()){

//                     for (int q = arr_size - 2; q >= 0; q--)
//                     {
//                         // de.push_back(de.front());
//                         // de.pop_front();
//                         int idx = find(de.begin(), de.end(), de[q]) - de.begin();       
//                         // cout << "idx : " << idx << "\n";          
//                         de.insert(de.end(), de[idx]);
//                         // for (auto f : de)
//                         // {
//                         //     cout << f << " ";
//                         // }

//                         // cout << "hger\n";
//                         de.erase(de.begin() + idx);
//                         // de.pop_front();
//                     }
//                 }
//             }
//             else if (str[j] == 'D'){
//                 if (de.empty())
//                 {
//                     cout << "error";
//                     break;
//                 }
//                 else
//                 {
//                     de.pop_front();
//                     arr_size = de.size();
//                 }
//             }
//         }
//         for (unsigned int k = 0; k < de.size(); k++)
//         {
//            if (k == 0)
//             cout << "["; 
//            cout << de[k];
//            if (k != de.size() - 1)
//                 cout << ",";
//             else
//                 cout << "]";
//         }
//         cout << "\n";
//     }
    
// }