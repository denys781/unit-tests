#pragma once

#include <cstdint>
#include <vector>

std::uint16_t CalculateRollScore(const std::vector<std::uint16_t>&, std::uint16_t);

bool IsStrike(const std::vector<std::uint16_t>&, std::uint16_t);

bool IsSpare(const std::vector<std::uint16_t>&, std::uint16_t);

std::uint16_t CalculateFrameScore(const std::vector<std::uint16_t>&, std::uint16_t);

std::uint16_t CalculateGameScore(const std::vector<std::uint16_t>&);