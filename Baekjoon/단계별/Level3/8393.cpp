#include <iostream>

int main(){
    int n;
    int answer = 0;
    std::cin >> n;
    for (size_t i = 1; i <= n; i++)
    {
        answer += i;
         
    }
    std::cout << answer << std::endl;
}