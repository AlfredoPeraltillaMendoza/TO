include <gtest/gtest.h>
#include "StackArray.cc"
#include <string>

TEST(StackArrayTestCase, InitStackArray) {

  ASSERT_DEATH(StackArray<int> stack2(0), "");

  StackArray<int> stack1(1);
  EXPECT_TRUE(stack1.empty());

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}