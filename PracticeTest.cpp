/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simples_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, symbols_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("i[;");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, empty_string_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_ascending)
{
    Practice obj;
    int x = 5;
    int y = 2;
    int z = 4;
    obj.sortDescending(x, y, z);
    ASSERT_TRUE(x>y && y > z);
}

TEST(PracticeTest, is_ascending2)
{
    Practice obj;
    int x = 151;
    int y = 100;
    int z = 500;
    obj.sortDescending(x, y, z);
    ASSERT_TRUE(x>y && y > z);
}
