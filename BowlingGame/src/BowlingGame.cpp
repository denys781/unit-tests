#include "BowlingGame.h"

const std::uint16_t MAX_PINS = 10;
const std::uint16_t MAX_FRAMES = 10;

std::uint16_t CalculateRollScore(const std::vector<std::uint16_t>& rolls, std::uint16_t rollIndex)
{
    return rolls[rollIndex];
}

bool IsStrike(const std::vector<std::uint16_t>& rolls, std::uint16_t rollIndex)
{
    return rolls[rollIndex] == MAX_PINS;
}

bool IsSpare(const std::vector<std::uint16_t>& rolls, std::uint16_t rollIndex)
{
    return rolls[rollIndex] + rolls[rollIndex + 1] == MAX_PINS;
}

std::uint16_t CalculateFrameScore(const std::vector<std::uint16_t>& rolls, std::uint16_t rollIndex)
{
    std::uint16_t frameScore = CalculateRollScore(rolls, rollIndex);

    if (IsStrike(rolls, rollIndex) || IsSpare(rolls, rollIndex))
    {
        frameScore += ((rollIndex + 1 >= rolls.size()) ? 0 : CalculateRollScore(rolls, rollIndex + 1));
        frameScore += ((rollIndex + 2 >= rolls.size()) ? 0 : CalculateRollScore(rolls, rollIndex + 2));
    }
    else
    {
        frameScore += CalculateRollScore(rolls, rollIndex + 1);
    }

    return frameScore;
}

std::uint16_t CalculateGameScore(const std::vector<std::uint16_t>& rolls)
{
    std::uint16_t totalScore = 0;
    std::uint16_t rollIndex = 0;

    for (std::uint16_t frame = 0; frame < MAX_FRAMES; ++frame)
    {
        totalScore += CalculateFrameScore(rolls, rollIndex);

        if (IsStrike(rolls, rollIndex))
        {
            rollIndex += 1;
        }
        else
        {
            rollIndex += 2;
        }
    }

    return totalScore;
}