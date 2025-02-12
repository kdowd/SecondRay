#include <iostream>
#include <vector>
#include <raylib.h>
#include <raylib-cpp-utils.hpp>

#include "Ball.h"

using namespace std;

const int screenWidth = 800;
const int screenHeight = 600;



int main() {
	cout << "Let the Games Begin!" << endl;
	Color BC = Color{ 155, 155, 155, 255 };
	SetTraceLogLevel(TraceLogLevel::LOG_NONE);


	InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
	SetTargetFPS(60);
	srand(time(0));


	vector<Ball> balls{};
	balls.reserve(25);


	balls.emplace_back(Ball(GOLD));
	for (int i = 0; i < 24; i++) {
		balls.emplace_back(Ball());
	}







	while (WindowShouldClose() == false) {

		BeginDrawing();


		for (auto& ball : balls) {
			ball.update();
		}

		EndDrawing();

		ClearBackground(BC);
	}

	CloseWindow();
	return 0;
}