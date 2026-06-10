#include <iostream>
#include <cmath>

using namespace std;

/*

General note to my future (tommorow) self - greater the distance, more hight the wall gets (one cell on a map is one "piece of wall")
and less of transparency the textures get (some squares from ascii table, scaling from empty black to full white). 

*/

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