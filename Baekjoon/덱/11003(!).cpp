#include <iostream>
#include <deque>

#include <algorithm>

using namespace std;

struct A {
    int data;
    int index;

      // 생성자 추가
    A(int d, int p) : data(d), index(p) {}
};

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);
    int n, L;

    cin >> n >> L;

    int num;
    int arr[n];
    // vector<int> vec;

    deque<A> de;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr[i] = num;
    }

    for (int i = 0; i < n; i++)
    {
        if (!de.empty() && i == de.front().index + L)
            de.pop_front();
        while (!de.empty() && de.back().data > arr[i])
        {
            de.pop_back();
        }
        de.push_back(A(arr[i], i));
        cout << de.front().data << " ";
    }
}


//시간 초과
// #include <iostream>
// #include <deque>
// #include <vector>

// using namespace std;

// int main(){
//     cin.tie(NULL);
//     ios_base::sync_with_stdio(0);
//     int n, L;

//     cin >> n >> L;

//     int num;
//     // vector<int> vec;
//     deque<int> de;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> num;
//         de.push_back(num);
//     }
    
//     for (int start = 0 - L + 1; start < n - L + 1; start++)
//     {
//         int max = 1000000001;
//         for (int i = start; i < start + L; i++)
//         {
//             if (i < 0)
//                 continue;
//             else 
//             {
//                 if (de[i] < max)
//                     max = de[i];
//             }    
//         }
//         cout << max << " ";
//     }
// }