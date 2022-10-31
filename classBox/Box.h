#pragma once
#include<iostream>
using namespace std;
class Box
{
	int hight;
	int width;
	int length;
public:
	Box()//-Конструктор по умолчанию.
	{
		hight = 10;
		width = 20;
		length = 25;
	}
	Box(int hight,int width,int length)//-Конструктор с параметраи .
	{
		this->hight = hight;
		this->length = length;
		this->width = width;
	}
	void showBox() {
		cout << "hight" << "  " << hight << " " << "width" << "  " << width << " " << "length"
			<< length << endl;
	}
};

