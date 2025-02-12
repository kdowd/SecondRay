#include "Ball.h"

using namespace std;


Ball::Ball() {
	ball_colour = DARKGREEN;
	ball_x = 140;
	ball_y = 140;
	ball_speed_x = 2 + rand() % 6;
	ball_speed_y = 2 + rand() % 6;;
	ball_radius = 20 + rand() % 60;
	ball_colour = { 255,33,44,133 };
	cout << "A BALL" << "\n";
};


Ball::Ball(Color color) {
	ball_colour = color;
	cout << "A BALL" << "\n";
	ball_x = 140;
	ball_y = 140;
	ball_speed_x = 2 + rand() % 6;
	ball_speed_y = 2 + rand() % 6;
	ball_radius = 20 + rand() % 60;
	ball_colour = color;
}



void Ball::update() {


	if (ball_x + ball_radius >= 800 || ball_x - ball_radius <= 0)
	{

		ball_speed_x *= -1;
	}

	if (ball_y + ball_radius >= 600 || ball_y - ball_radius <= 0)
	{

		ball_speed_y *= -1;
	}

	ball_x += ball_speed_x;
	ball_y += ball_speed_y;





	DrawCircle(ball_x, ball_y, ball_radius, ball_colour);
};

