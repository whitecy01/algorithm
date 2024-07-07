#include <iostream>
// #include <map>

int main(){
    long all;
    int count_buyGoods;
    // std::map<int, int> buy;

    std::cin >> all;
    std::cin >> count_buyGoods;

    long compaer_answer = 0;
    for (size_t i = 0; i < count_buyGoods; i++)
    {
        int a,b;
        std::cin >> a >> b;
        compaer_answer += a * b;
    }
    
    if (all == compaer_answer)
    {
        std::cout << "Yes" << std::endl;
    }
    else 
        std::cout << "No" << std::endl;
    

}