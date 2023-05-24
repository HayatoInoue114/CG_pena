#include "Player.h"

void Player::Init() {
	transform_.position = { 100,100 };
	transform_.radius = 50;
	speed_ = 10;
}

void Player::Move() {
	if (Novice::CheckHitKey(DIK_UP)) {
		transform_.position.y -= speed_;
	}
	if (Novice::CheckHitKey(DIK_DOWN)) {
		transform_.position.y += speed_;
	}
	if (Novice::CheckHitKey(DIK_LEFT)) {
		transform_.position.x -= speed_;
	}
	if (Novice::CheckHitKey(DIK_RIGHT)) {
		transform_.position.x += speed_;
	}
}

void Player::Draw() {
	Novice::DrawEllipse((int)transform_.position.x, (int)transform_.position.y, (int)transform_.radius, (int)transform_.radius, 0.0f, WHITE, kFillModeSolid);
}
