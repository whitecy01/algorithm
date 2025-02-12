#include <iostream>


int f[100];

using namespace std;

// int fibo(int n){
//     cout << "f(" << n << ")" << " ";

//     if (n == 0) return 0;
//     if (n == 1 || n == 2) return 1;
//     cout << "ans : " << f[n] << " ";
//     return f[n] = fibo(n-1) + fibo(n-2);
// }


int fibo(int n){
    cout << "f(" << n << ")" << " ";
    
    f[1]=1;
    f[2]=1;
    for (int i = 3; i <= n; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
    cout << f[n] << "\n";
    return 0;
}

int main(){
    cout << fibo(6) << "\n";
}