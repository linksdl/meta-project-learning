#pragma once
#include "Point.h"

// Բ��
class Circle {

private:
	Point m_Center;	// Բ��
	int m_Radius;	// �뾶

public:
	void setCenter(int x, int y);
	void setRadius(int radius);

	void isPointInCircle(Point& point);

};

