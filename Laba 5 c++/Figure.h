class Figure
{
protected:
	Point* _figure;
	int _TheNumOfVertex;
	double SideLength(Point first, Point second);
public:
	Figure(int size, Point* mass);
	double SideLength(char first, char second);
	
}; 
