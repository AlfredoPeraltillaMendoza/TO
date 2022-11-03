#include <gtest/gtest.h>
#include "StackArray.cc"
#include <string>

TEST(StackArrayTestCase, TestStackArray) {

  StackArray<int> stack1(1);
  EXPECT_TRUE(stack1.empty());
  
  StackArray<int> stack2(0), "";
  StackArray<std::string> stack2(1);
  stack2.push("X");
  EXPECT_EQ(stack2.top(),"X");

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}