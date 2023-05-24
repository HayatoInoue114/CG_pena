#pragma once
#define _USE_MATH_DEFINES
#include<math.h>
#include <Vector2.h>
#include<Novice.h>

class Bullet
{
public:

	void Init();

	void Update(const Vector2 position);

	void Draw();

	/*void ChackCollision();*/

	Vector2 GetPosition() { return position_; }
	

private:
	Vector2 position_;
	float velocity_;
	Vector2 size_;
	bool isShot_;
	float aliveCount_;
	bool isHit_;

};

