#include <iostream>
using namespace std;

int func1(int a){
    int answer;
    answer = 0;
    for (int i = 1; i <= a; i++)
    {
        if (i % 3 == 0 || i % 5 == 0){
            answer += i;
        }
    }

    return answer;
}

int main(){
    int a;
    cin >> a;
    int b = func1(a);
    cout << b;
}