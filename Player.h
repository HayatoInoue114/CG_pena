#pragma once
#include<Novice.h>
#include"Transform.h"
class Player
{
public:
	void Init();
	void Move();
	void Draw();

private:
	Transform transform_;
	int speed_;
};

