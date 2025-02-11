#include <iostream>
#include <raylib.h>
#include <raylib-cpp-utils.hpp>


using namespace std;

const int screenWidth = 800;
const int screenHeight = 600;

class Ball
{
public:
	int ball_x = 140;
	int ball_y = 140;
	int ball_speed_x = 2 + rand() % 6;
	int ball_speed_y = 2 + rand() % 6;;
	int ball_radius = 60;
	Color ball_colour = DARKGREEN;

public:
	Ball() {
		cout << "A BALL" << "\n";

	}

	Ball(Color color) {
		cout << "A BALL" << "\n";
		ball_colour = color;
	}



	void update() {
		cout << "update " << ball_x << endl;
		if (ball_x + ball_radius >= screenWidth || ball_x - ball_radius <= 0)
		{

			ball_speed_x *= -1;
		}

		if (ball_y + ball_radius >= screenHeight || ball_y - ball_radius <= 0)
		{
			cout << "update " << ball_y << endl;
			ball_speed_y *= -1;
		}

		ball_x += ball_speed_x;
		ball_y += ball_speed_y;

		DrawCircle(ball_x, ball_y, ball_radius, ball_colour);
	}


private:


};

int main() {
	cout << "Let the Games Begin!" << endl;
	Color BC = Color{ 155, 155, 155, 255 };
	SetTraceLogLevel(TraceLogLevel::LOG_NONE);


	InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
	SetTargetFPS(60);
	srand(time(0));


	Ball a(YELLOW);
	Ball b(ORANGE);
	Ball c;


	while (WindowShouldClose() == false) {

		BeginDrawing();


		a.update();
		b.update();
		c.update();

		EndDrawing();

		ClearBackground(BC);
	}

	CloseWindow();
	return 0;
}