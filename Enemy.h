#pragma once
#include <Vector2.h>
#include <Novice.h>

class Enemy
{
public:
	void Init();

	void Update();

	void Draw();

private:
	Vector2 position_;
	Vector2 velocity_;
	int size_;

};

