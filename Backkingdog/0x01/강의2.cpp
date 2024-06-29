#include <iostream>


using namespace std;

int func1(int *a, int b){
    int answer;
    answer = 0;
    
    for (int i = 1; i <= b; i++)
    {
        if (i % 3 == 0 || i % 5 == 0){
            answer += i;
        }
    }

    return answer;
}

int main(){
    int a[5]= {1,52,48};

    int b = func1(a, 3);
    cout << b;
}