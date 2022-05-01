#pragma once

class Cube {

private:
	int m_Length;	// ��
	int m_Width;	// ��
	int m_Height;	// ��

public:
	void setLength(int length);
	int getLength();

	void setWidth(int width);
	int getWidth();

	void setHeight(int height);
	int getHeight();

	// ��ȡ����ķ���
	int getArea();

	// ��ȡ����ķ���
	int getVolume();

	bool cubCompare(Cube & c);

};