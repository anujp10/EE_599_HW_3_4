#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(ValidExpShould, ValidExpReturn) {
  Solution solution;
  std::string input = "(a+b)[c*d]{5g+h}";
  std::string actual = solution.CheckValidExpression(input);
  std::string expected = "true";
  EXPECT_EQ(expected, actual);
}

TEST(ValidExpShould_1, ValidExpReturn_1) {
  Solution solution;
  std::string input = "(a+b]";
  std::string actual = solution.CheckValidExpression(input);
  std::string expected = "false";
  EXPECT_EQ(expected, actual);
}

TEST(ValidExpShould_2, ValidExpReturn_2) {
  Solution solution;
  std::string input = "(7h+[5c)+7]";
  std::string actual = solution.CheckValidExpression(input);
  std::string expected = "false";
  EXPECT_EQ(expected, actual);
}

TEST(ValidExpShould_3, ValidExpReturn_3) {
  Solution solution;
  std::string input = "{2k+[5j]}";
  std::string actual = solution.CheckValidExpression(input);
  std::string expected = "true";
  EXPECT_EQ(expected, actual);
}

TEST(ValidExpShould_4, ValidExpReturn_4) {
  Solution solution;
  std::string input = "{2k++[5--*j]}";
  std::string actual = solution.CheckValidExpression(input);
  std::string expected = "true";
  EXPECT_EQ(expected, actual);
}

TEST(ValidExpShould_5, ValidExpReturn_5) {
  Solution solution;
  std::string input = "{{{{[[[[(((())))]]]]}}}}&&^^%%$$";
  std::string actual = solution.CheckValidExpression(input);
  std::string expected = "true";
  EXPECT_EQ(expected, actual);
}

TEST(ValidExpShould_6, ValidExpReturn_6) {
  Solution solution;
  std::string input = "";
  std::string actual = solution.CheckValidExpression(input);
  std::string expected = "true";
  EXPECT_EQ(expected, actual);
}