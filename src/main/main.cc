#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    std::string input = "(a+b)";
    std::string input2 = "(a+b)[c*d]{5g+h}";
    std::string input3 = "(a+b]";
    std::string input4 = "(7h+[5c)+7]";
    std::string input5 = "{2k+[5j]}";
    std::string input6 = "{2k++[5--*j]}";

    std::cout << solution.CheckValidExpression(input) << std::endl; 
    std::cout << solution.CheckValidExpression(input2) << std::endl;
    std::cout << solution.CheckValidExpression(input3) << std::endl;
    std::cout << solution.CheckValidExpression(input4) << std::endl;
    std::cout << solution.CheckValidExpression(input5) << std::endl;
    std::cout << solution.CheckValidExpression(input6) << std::endl;
    
    return EXIT_SUCCESS;
}