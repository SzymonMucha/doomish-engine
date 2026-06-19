#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Screen {
public:
	vector<vector<char>> currentFrame;
	Screen(int width, int height){
		this->screenHeight = height;
		this->screenWidth = width;
	}
	void refreshScreen(){
		for(int i = 0; i < this->screenHeight; i++){
			for(int j = 0; j < this->screenWidth; j++){
				cout << this->currentFrame[i][j];
			}
		}
	}
private:
	int screenWidth;
	int screenHeight;
};

class Camera {
public:
	Camera() {
		this->x = 0;
		this->y = 0;
		this->angle = 90;
	}
	Camera(int x, int y) {
		this->x = x;
		this->y = y;
		this->angle = 90;
	}
	Camera(int x, int y, int angle) {
		this->x = x;
		this->y = y;
		this->angle = angle;
	}
	void rotate(int angle) {
		this->angle += angle;
		this->angle %= 360;
	}
	void moveForward(int s) {
		if (s == 0) { return; }

		//convert angle to radians then using trig fun definitions to count x and y change
		int x = (int)(s * cos(this->angle * 3.14 / 180) + 0.5);
		int y = (int)(s * sin(this->angle * 3.14 / 180) + 0.5);

		this->x += x;
		this->y += y;
	}
private:
	int x;
	int y;
	int angle;
};

int main() {


	return 0;
}