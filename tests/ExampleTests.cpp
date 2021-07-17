#include "gtest/gtest.h"
#include "Example.hpp"

TEST(SanityTests, ShouldPass) {
  EXPECT_TRUE(true);
}

// TEST(SanityTests, ShouldFail) {
//   EXPECT_TRUE(false);
// }


TEST(ActualTests, AdditionTest) {
  int x = 2, y = 3;

  int returnedSum = add(x, y);
  int expectedSum = x+y;

  EXPECT_EQ(expectedSum, returnedSum);
}
