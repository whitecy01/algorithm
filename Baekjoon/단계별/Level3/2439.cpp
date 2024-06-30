#include <iostream>
using namespace std;

//이 문제는 n에서 i를 뺀 값에서 부터 별을 찍으면 됨
int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n ; j++)
        {
            if (n - i + 1<= j)
            {
                cout<< n-i + 1;
                cout << "*";
            }
            else 
                cout << " ";
        }
        cout << "\n";
    }
    
    
}