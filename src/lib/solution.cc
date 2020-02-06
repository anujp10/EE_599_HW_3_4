#include "solution.h"
#include <stack>
#include <map>

std::string Solution::CheckValidExpression(const std::string &input)
{
  std::stack<char> inputstack;

  for (unsigned int i = 0; i < input.size(); i++)
  {
    if (input[i] == '(' || input[i] == '[' || input[i] == '{')
      inputstack.push(input[i]);
    else if (input[i] == ')' || input[i] == ']' || input[i] == '}')
    {
      if (inputstack.top() == '(' && input[i] == ')')
        inputstack.pop();
      else if (inputstack.top() == '[' && input[i] == ']')
        inputstack.pop();
      else if (inputstack.top() == '{' && input[i] == '}')
        inputstack.pop();
      else
        return "false";
    }
  }

  return "true";
}