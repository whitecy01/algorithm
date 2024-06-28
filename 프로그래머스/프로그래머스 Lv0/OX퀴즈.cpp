#include <iostream>
#include <vector>
#include <stack>
#include <string>

int ft_atoi(const char *s)
{
    int se = 1;
    int num = 0;

    int i = 0;
    while (s[i] != '\0' && ((s[i] >= 9 && s[i] <= 13)
                || s[i] == 32))
            i++;


    if (s[i] == '-')
    {
        se *= -1;
        i++;
    }
    else
    {
        if (s[i] == ' ')
        {
            i++;
        }
    }
        while (s[i] != '\0' && ((s[i] >= 9 && s[i] <= 13)
                || s[i] == 32))
            i++;



    while (s[i] && (s[i] >= '0' && s[i] <= '9'))
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }
    
    return num * se;
}


std::vector<std::string> solution(std::vector<std::string>quiz){

    std::vector<std::string> answer;
    std::vector<int> temp;
    int a;

    for (int i = 0; i < quiz.size(); i++)
    {
        int sum = 1;
        int num = 0;
        std::string stance = quiz[i];
        for (int j = 0; j < stance.size(); j++)
        {   
            if (stance[j] != ' ')
            {
                if (stance[j] == '-')
                {
                    sum *= -1;
                }
                else if (stance[j] == '+' || stance[j] == '=')
                {

                }
                else
                {
                    int k = j;
                    while (stance[k] >= '0' && '9' >= stance[k])
                    {
                        num = num * 10 + (stance[k] - '0');
                        k++;
                    }
                    j = k;
                    temp.push_back(num * sum);
                    num = 0;
                    sum = 1;
                }
            }
        }
        int pre;
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == 0)
            {
                pre = temp[i];
            }
            else if (i == temp.size() - 1)
            {
                if (pre == temp[i])
                {
                    answer.push_back("O");
                }
                else
                {
                    answer.push_back("X");
                }
            }
            else
            {
                pre += temp[i];
            }
        }
        temp.clear();
    }

    return answer;

}


int main()
{
    std::vector<std::string> quiz;


    // quiz.push_back("3 - 4 = -3");
        quiz.push_back("19 - 6 = 13");
    // quiz.push_back("5 + 6 = 11");

    std::vector<std::string>answer = solution(quiz);
    for (int i = 0; i < answer.size(); i++)
    {
        std::cout << answer[i] << " ";
    }

    

}