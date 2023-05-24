#include "Enemy.h"



Enemy::Enemy() {
	position_ = { 100,100 };
	speed_ = 3;
	radius_ = 50;
}



void Enemy::Update() {
	position_.x += speed_;
	if (position_.x - radius_ <= 0) {
		speed_ *= -1;
	}
	if (position_.x + radius_ >= 1280) {
		speed_ *= -1;
	}
}

void Enemy::Draw() {
	Novice::DrawEllipse((int)position_.x, (int)position_.y, radius_, radius_, 0.0f, WHITE, kFillModeSolid);
}