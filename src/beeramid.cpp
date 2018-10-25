#include <gtest/gtest.h>
#include <cmath>

int beeramid(int bonus, double price)
{
    if (bonus < price || price <= 0)
        return 0;
    int nbeers = static_cast<int>(bonus / price);
    int level = 1;
    while (true)
    {
        nbeers -= std::pow(level, 2);
        if (nbeers < 0)
            break;
        level++;
    }
    return level - 1;
}

TEST(Codewars, 5kyu_beeramid)
{
    ASSERT_EQ(beeramid(9, 2), 1);
    ASSERT_EQ(beeramid(10, 2), 2);
    ASSERT_EQ(beeramid(11, 2), 2);
    ASSERT_EQ(beeramid(21, 1.5), 3);
    ASSERT_EQ(beeramid(454, 5), 5);
    ASSERT_EQ(beeramid(455, 5), 6);
    ASSERT_EQ(beeramid(4, 4), 1);
    ASSERT_EQ(beeramid(3, 4), 0);
    ASSERT_EQ(beeramid(0, 4), 0);
    ASSERT_EQ(beeramid(-1, 4), 0);
}
