#include "UnitTestsUtils.hpp"

#include <initializer_list>

std::vector<std::uint16_t> BowlingGameTest::m_rolls = {};

void BowlingGameTest::SetUpTestSuite()
{
    m_rolls.assign({ 10, 5, 5, 10, 3, 2, 6, 4, 10, 1, 8, 1, 2, 3, 4, 8, 2 });
}

std::vector<std::uint16_t> BowlingGameTest::GetAdditionalRollsSet()
{
    return { 7, 3, 10, 4, 5, 10, 2, 2, 3, 6, 10, 9, 1, 10, 5, 5 };
}

::testing::AssertionResult
IsStrikeHit(const std::vector<std::uint16_t>& rolls, std::uint16_t rollIndex)
{
    return IsStrike(rolls, rollIndex)
        ? ::testing::AssertionSuccess()
        : ::testing::AssertionFailure() << "Strike not hit in tested frame";
}

::testing::AssertionResult
IsSpareHit(const std::vector<std::uint16_t>& rolls, std::uint16_t rollIndex)
{
    return IsSpare(rolls, rollIndex)
        ? ::testing::AssertionSuccess()
        : ::testing::AssertionFailure() << "Spare not hit in tested frame";
}

::testing::AssertionResult
IsRollScoreCalculated(const std::vector<std::uint16_t>& rolls, std::uint16_t rollIndex, std::uint16_t expectedRollScore)
{
    return (CalculateRollScore(rolls, rollIndex) == expectedRollScore)
        ? ::testing::AssertionSuccess()
        : ::testing::AssertionFailure() << "A score of a certain roll not calculated correctly";
}

::testing::AssertionResult
IsFrameScoreCalculated(const std::vector<std::uint16_t>& rolls, std::uint16_t rollIndex, std::uint16_t expectedFrameScore)
{
    return (CalculateFrameScore(rolls, rollIndex) == expectedFrameScore)
        ? ::testing::AssertionSuccess()
        : ::testing::AssertionFailure() << "A score of a certain frame not calculated correctly";
}

::testing::AssertionResult
IsGameScoreCalculated(const std::vector<std::uint16_t>& rolls, std::uint16_t expectedGameScore)
{
    return (CalculateGameScore(rolls) == expectedGameScore)
        ? ::testing::AssertionSuccess()
        : ::testing::AssertionFailure() << "A score of a game not calculated correctly";
}