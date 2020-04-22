#include<iostream>
#include"Point.h"

Point::Point()
	{
		_TheNameOfVertex = NULL;
		_x = 0;
		_y = 0;
	}
Point::	Point(char Name, int x, int y)
	{
		_TheNameOfVertex = Name;
		_x = x;
		_y = y;
	}
float Point::GetX()
	{
		return _x;
	}
float Point:: GetY()
	{
		return _y;
	}
char Point::GetTheNameOfVertex()
	{
		return _TheNameOfVertex;
	}

