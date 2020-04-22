class Ryadok
{
private:
	char* _ryadok;//����� ���� - string
	int _len;//������� �����
public:
	Ryadok();//����������� ��� ���������(��� ��������� ������� �����)
	
	Ryadok(const char* ryadok);//����������� � �����������
	
	Ryadok(const Ryadok& other);//����������� ���������
	
	int Dovgina(const char* str);//����������� ������� �����
	
	Ryadok operator +(const Ryadok& other);//���������������� ��������� ���������
	
	Ryadok& operator=(const Ryadok& other);
	
	Ryadok& operator-(const char vidyemnuk);
	
	void Print();
	
	~Ryadok();//����������
	
}; 

