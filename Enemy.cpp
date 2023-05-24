#include "Enemy.h"





void Enemy::Init() {
	position_ = {100,100};
	velocity_ = {3,3};
	size_ = 50;
}

void Enemy::Update() {
	position_.x += velocity_.x;
	if (position_.x + size_ <= 0) {
		velocity_.x *= -1;
	}
	if (position_.x + size_ >= 1280) {
		velocity_.x *= -1;
	}
}

void Enemy::Draw() {
	Novice::DrawEllipse((int)position_.x, (int)position_.y, size_, size_, 0.0f, WHITE, kFillModeSolid);
}