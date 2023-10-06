//
// Created by Admin on 01.10.2023.
//

#include "Solution.h"

#include "gtest/gtest.h"

class RomanToIntegerTest : public testing::Test {
public:
    RomanToInt::Solution testedObject;
};

TEST_F(RomanToIntegerTest, test1) {
    std::string input = "III";
    int etalon        = 3;
    int output        = testedObject.romanToInt(input);

    ASSERT_EQ(etalon, output);
}

TEST_F(RomanToIntegerTest, test2) {
    std::string input = "LVIII";
    int etalon        = 58;
    int output        = testedObject.romanToInt(input);

    ASSERT_EQ(etalon, output);
}

TEST_F(RomanToIntegerTest, test3) {
    std::string input = "MCMXCIV";
    int etalon        = 1994;
    int output        = testedObject.romanToInt(input);

    ASSERT_EQ(etalon, output);
}