#include<iostream>
#include"Figure.h"
#include"Point.h"


double Figure::SideLength(Point first, Point second)
	{
		float x1 = first.GetX(), x2 = second.GetX(), y1 = first.GetY(), y2 = second.GetY();
		double sidelength;
		sidelength = fabs(sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));
		return sidelength;
	}

Figure::Figure(int size, Point* mass)
	{
		_TheNumOfVertex = size;
		_figure = new Point[size];
		_figure = mass;
	}
double Figure::SideLength(char first, char second)
	{
		float x1 = 0, x2 = 0, y1 = 0, y2 = 0;
		double sidelength;
		for (int i = 0; i < _TheNumOfVertex; i++)
		{
			if (_figure[i].GetTheNameOfVertex() == first)
			{
				x1 = _figure[i].GetX();
				y1 = _figure[i].GetY();
			}
			if (_figure[i].GetTheNameOfVertex() == second)
			{
				x2 = _figure[i].GetX();
				y2 = _figure[i].GetY();
			}
		}

		sidelength = fabs(sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));


		return sidelength;
	}
