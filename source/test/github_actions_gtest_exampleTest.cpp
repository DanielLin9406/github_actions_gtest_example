#include "../header/github_actions_gtest_example/testing.h"

#include <gtest/gtest.h>

TEST(githubActionsGtestExampleTest, firstTest) {
  EXPECT_TRUE( 1 == 1 );
}

TEST(githubActionsGtestExampleTest, addTest) {
  const int a = 1;
  const int b = 3;
  // const int result = githubActionsGtestExample::add(a, b);
  
  EXPECT_EQ( 4, a + b );
}
