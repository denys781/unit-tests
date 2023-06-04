#include "UnitTestsUtils.hpp"

TEST_F(BowlingGameTest, IsRollScoreCalculatedCorrectly)
{
    EXPECT_TRUE(IsRollScoreCalculated(m_rolls, 0, 10));
    EXPECT_TRUE(IsRollScoreCalculated(m_rolls, 5, 2));
    EXPECT_TRUE(IsRollScoreCalculated(m_rolls, 10, 8));
}

TEST_F(BowlingGameTest, IsStrikeHitInFrame)
{
    EXPECT_TRUE(IsStrikeHit(m_rolls, 0));
    EXPECT_TRUE(IsStrikeHit(m_rolls, 3));
    EXPECT_TRUE(IsStrikeHit(m_rolls, 8));
}

TEST_F(BowlingGameTest, IsSpareHitInFrame)
{
    EXPECT_TRUE(IsSpareHit(m_rolls, 1));
    EXPECT_TRUE(IsSpareHit(m_rolls, 6));
    EXPECT_TRUE(IsSpareHit(m_rolls, 15));
}

TEST_F(BowlingGameTest, IsFrameScoreCalculatedCorrectly)
{
    EXPECT_TRUE(IsFrameScoreCalculated(m_rolls, 0, 20));
    EXPECT_TRUE(IsFrameScoreCalculated(m_rolls, 4, 5));
    EXPECT_TRUE(IsFrameScoreCalculated(m_rolls, 6, 20));
}

TEST_F(BowlingGameTest, IsGameScoreCalculatedCorrectly)
{
    EXPECT_TRUE(IsGameScoreCalculated(m_rolls, 128));
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}