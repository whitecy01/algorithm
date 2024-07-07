#include <iostream>

int main(){
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        int a,b;
        std::cin >> a >> b;
        std::cout << "Case #" << i + 1 << ": " << a + b << "\n";
    }
    

}