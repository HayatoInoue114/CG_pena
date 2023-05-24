#include "Bullet.h"

float Length(Vector2 start, Vector2 end) {
	return (float)sqrt((double)(pow((start.x) - (end.x), 2) + pow((start.y) - (end.y), 2)));
}


bool BallCollision(Vector2 positionA, float radiusA, Vector2 positionB, float radiusB) {
	return (Length(positionA, positionB) <= (radiusA + radiusB));
}




void Bullet::Init() {
	position_ = { -200,-200 };
	velocity_ = 10;
	size_ = { 5,5 };
	isShot_ = false;
	aliveCount_ = 0;
	isHit_ = false;
}

void Bullet::Update(const Vector2 position) {
	/*ChackCollision(enemy);*/
	if (Novice::CheckHitKey(DIK_SPACE) && !isShot_) {
		position_ = { position };
		isShot_ = true;
	}

	if (isShot_) {
		position_.y -= velocity_;
		aliveCount_++;
	}
	if (position_.y <= -20) {
		isShot_ = false;
		aliveCount_ = 0;
	}

}

void Bullet::Draw() {
	if (isShot_) {
		Novice::DrawEllipse((int)position_.x, (int)position_.y, (int)size_.x, (int)size_.y, 0.0f, RED, kFillModeSolid);
	}
}

//void Bullet::ChackCollision(Enemy* enemy) {
//	if (BallCollision(enemy->GetPosition(), enemy->GetRadius().x, position_, size_.x)) {
//		enemy->isAlive_ = false;
//
//		isShot_ = false;
//	}
//}