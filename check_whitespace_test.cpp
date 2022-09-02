#include <gtest/gtest.h>

#include "check_whitespace.h"

TEST(Strip, EmptyString) {
    ASSERT_STREQ("", strip(""));
}

TEST(Strip, NoWhitespace) {
    ASSERT_STREQ("frog", strip("frog"));
}

TEST(Strip, WhitespaceOnFront) {
    ASSERT_STREQ("frog", strip("   frog"));
}

TEST(Strip, WhitespaceOnBack) {
    ASSERT_STREQ("frog", strip("frog  "));
}

TEST(Strip, WhitespaceOnBothEnds) {
    ASSERT_STREQ("frog", strip("  frog     "));
}

TEST(IsClean, EmptyString) {
    ASSERT_TRUE(is_clean(""));
}

TEST(IsClean, NoWhitespace) {
    ASSERT_TRUE(is_clean("University of Minnesota Morris"));
}

TEST(IsClean, WhitespaceOnFront) {
    ASSERT_FALSE(is_clean("   University of Minnesota Morris"));
}

TEST(IsClean, WhitespaceOnBack) {
    ASSERT_FALSE(is_clean("University of Minnesota Morris  "));
}

TEST(IsClean, WhitespaceOnBothEnds) {
    ASSERT_FALSE(is_clean(" University of Minnesota Morris"    ));
}

int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}