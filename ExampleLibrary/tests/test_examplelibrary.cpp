#include <gtest/gtest.h>
#include <examplelibrary.hpp>

TEST(ExampleLibrary, exampleFunctionTest) {
	EXPECT_EQ(multiply(3, 2), 6);
}