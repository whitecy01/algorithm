#include <iostream>
#include <string>

int main(){

    std::string a,b,c;
    std::cin >> a >> b >> c;
    

    long answer  = stold(a) + stold(b) + stold(c);
    std::cout << answer <<std::endl;
    return 0;
}