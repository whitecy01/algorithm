#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;


    int j;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + (i-1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0 ; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + (i - 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

}

// https://goalsdhkdwk.tistory.com/entry/BOJ%EB%B0%B1%EC%A4%80-2444%EB%B2%88-%EB%B3%84-%EC%B0%8D%EA%B8%B0-7-cc-%ED%92%80%EC%9D%B4