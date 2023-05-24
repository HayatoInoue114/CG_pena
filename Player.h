#pragma once
#include<Novice.h>
#include"Transform.h"
#include"Bullet.h"

class Player
{
public:
	void Init();
	void Move();
	void Draw();

private:
	Transform transform_;
	int speed_;

	Bullet* bullet = new Bullet;
};

