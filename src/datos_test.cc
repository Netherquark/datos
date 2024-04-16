#include "gtest/gtest.h"
#include "main.h"

TEST(HelloWorldTest, PrintsHelloWorld) {
    testing::internal::CaptureStdout();
    
    HelloWorld();
    std::string output = testing::internal::GetCapturedStdout();
}