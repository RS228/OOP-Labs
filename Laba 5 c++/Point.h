struct Point
{
private:
	char _TheNameOfVertex;
	float _x, _y;
public:
	Point();
	Point(char Name, int x, int y);
	float GetX();
	float GetY();
	char GetTheNameOfVertex();

}; 
