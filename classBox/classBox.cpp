// classBox.cpp : 

#include <iostream>
#include"Box.h"
using namespace std;
int main()
{
	Box b1;
	Box b2(2, 2, 2);
	Box b3(b2);
	Box *b4 = new Box(7,7,7);
	b4->showBox();
	b1.showBox();
	b2.showBox();
	b3.showBox();
	b4->showBox();
	
	
}

