#pragma once

#include "gtest/gtest.h"
#include "gmock/gmock.h" // not used in current tests
#include "BowlingGame.h"

#include <vector>

class BowlingGameTest : public ::testing::Test
{
protected:
    static void SetUpTestSuite();

protected:
    static std::vector<std::uint16_t> m_rolls;
};

::testing::AssertionResult
IsStrikeHit(const std::vector<std::uint16_t>&, std::uint16_t);

::testing::AssertionResult
IsSpareHit(const std::vector<std::uint16_t>&, std::uint16_t);

::testing::AssertionResult
IsRollScoreCalculated(const std::vector<std::uint16_t>&, std::uint16_t, std::uint16_t);

::testing::AssertionResult
IsFrameScoreCalculated(const std::vector<std::uint16_t>&, std::uint16_t, std::uint16_t);

::testing::AssertionResult
IsGameScoreCalculated(const std::vector<std::uint16_t>&, std::uint16_t);