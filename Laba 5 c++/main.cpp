#include<iostream>
#include<Windows.h>

using namespace std;

 struct Point
{
private:
	char _TheNameOfVertex;
	float _x, _y;
public:
	Point()
	{
		_TheNameOfVertex = NULL;
		_x = 0;
		_y = 0;
	}
	Point(char Name, int x, int y)
	{
		_TheNameOfVertex  = Name;
		_x = x; 
		_y = y;
	}
	float GetX()
	{
		return _x;
	}
	float GetY()
	{
		return _y;
	}
	char GetTheNameOfVertex()
	{
		return _TheNameOfVertex;
	}
	
};
class Figure
{
protected:
	Point* _figure;
	int _TheNumOfVertex;
	double SideLength(Point first, Point second)
	{
		float x1 = first.GetX(), x2 = second.GetX(), y1 = first.GetY(), y2 = second.GetY();
		double sidelength;
		sidelength = fabs(sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));
		return sidelength;
	}
public:
	Figure(int size, Point*mass)
	{
		_TheNumOfVertex = size;
		_figure = mass;
	}
	double SideLength(char first, char second)
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

};

class Trapeze :public Figure
{
public:
	Trapeze( Point* mass) :Figure(4, mass) {};
	double Perimeter()
	{
		double perimeter = 0;
		for (int i = 0; i < _TheNumOfVertex - 1; i++)
		{
			perimeter += SideLength(_figure[i], _figure[i + 1]);
		}
		perimeter += SideLength(_figure[0], _figure[_TheNumOfVertex - 1]);

		return perimeter;
	}
	double Square()
	{
		double side1 = SideLength(_figure[0], _figure[1]);
		double side2 = SideLength(_figure[1], _figure[2]);
		double side3 = SideLength(_figure[2], _figure[3]);
		double side4 = SideLength(_figure[3], _figure[0]);
		double diagonal = SideLength(_figure[0], _figure[2]);
		double per1 = (diagonal + side1 + side2) / 2;
		double per2 = (diagonal + side3 + side4) / 2;
		double sqr1 = sqrt(per1 * (per1 - side1) * (per1 - side2) * (per1 - diagonal));
		double sqr2 = sqrt(per2 * (per2 - side3) * (per2 - side4) * (per2 - diagonal));
		double square = sqr1 + sqr2;
		return square;
	}
};





int main()
{
	int NumOfVertex = 3;
	Point first('A', 0, 0);
	Point second('B', 0, 4);
	Point third('C', 3, 0);
	Point mass[] = { first, second, third };
	Figure triangle(NumOfVertex,mass);
	cout<<triangle.SideLength('A','B')<<endl;

	int NumOfVertex2 = 4;
	Point first2('A', 1, -6);
	Point second2('B', 5, -3);
	Point third2('C', 9, -3);
	Point fifth2('D', 9, -6);
	Point mass2[] = { first2, second2, third2,fifth2 };
	Trapeze trapeze(NumOfVertex2, mass2);
	cout<<trapeze.Perimeter()<<endl;
	cout<<trapeze.Square()<<endl;


	return 0;
}
