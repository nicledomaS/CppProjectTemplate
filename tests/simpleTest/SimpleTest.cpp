#include "gtest/gtest.h"

namespace nicledomas
{

namespace test
{

class Test_SimpleTest : public ::testing::Test
{
protected:
    Test_SimpleTest()
    {}

    void SetUp() override
    {
    }

    void TearDown() override
    {
    }
};

TEST_F(Test_SimpleTest, FirstTest)
{
    ASSERT_EQ(1, 1);
    ASSERT_NE(1, 2);
    ASSERT_NE(1, 3);
}

} // test

} // nicledomas
