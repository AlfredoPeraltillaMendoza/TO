#include <gtest/gtest.h>
#include "StackArray.cc"
#include <string>

TEST(StackArrayTestCase, PushStackArray) {

  StackArray<std::string> stack2(2);
  stack2.push("a");
  EXPECT_EQ(stack2.top(),"a");
  
}

TEST(StackArrayTestCase, InitStackArray) {

  ASSERT_DEATH(StackArray<int> stack2(0), "");
  StackArray<int> stack1(1);
  EXPECT_TRUE(stack1.empty());

}

TEST(StackArrayTestCase, TopStackArray) {
	
  StackArray<int> stack1(2);
  ASSERT_DEATH(stack1.top(), "");
  
  StackArray<int> stack2(2);
  stack2.push(1);
  EXPECT_EQ(stack2.top(), 1);
  
  StackArray<int> stack3(2);
  stack3.push(1);
  stack3.push(2);
  stack3.push(3);
  
  EXPECT_EQ(stack3.top(), 3);

}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}