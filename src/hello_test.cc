// #include <gtest/gtest.h>

// // Demonstrate some basic assertions.
// TEST(HelloTest, BasicAssertions) {
//   // Expect two strings not to be equal.
//   EXPECT_STRNE("hello", "world");
//   // Expect equality.
//   EXPECT_EQ(7 * 6, 42);
// }

#include "gtest/gtest.h"
#include "main.h"

// Test case to check if HelloWorld function prints "Hello, world!"
TEST(HelloWorldTest, PrintsHelloWorld) {
    // Redirect stdout to a temporary buffer
    testing::internal::CaptureStdout();
    
    // Call the function we want to test
    HelloWorld();
    
    // Get the output from stdout
    std::string output = testing::internal::GetCapturedStdout();
    
    // Check if the output is as expected
    // EXPECT_EQ(HelloWorld(1), "1");
    // EXPECT_EQ(std::to_string(HelloWorld(1)), "1");
}