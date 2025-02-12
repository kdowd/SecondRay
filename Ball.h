#pragma once

#include <iostream>
#include <raylib.h>
#include <raylib-cpp-utils.hpp>


class Ball
{
public:
	int ball_x{};
	int ball_y{};
	int ball_speed_x{};
	int ball_speed_y{};
	int ball_radius{};
	Color ball_colour{};

public:
	Ball();
	Ball(Color);
	void update();
};