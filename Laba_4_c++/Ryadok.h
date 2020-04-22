class Ryadok
{
private:
	char* _ryadok;//масив чарів - string
	int _len;//довжина рядка
public:
	Ryadok();//Конструктор без параметрів(для створення пустого обєкту)
	
	Ryadok(const char* ryadok);//Конструктор з параметрами
	
	Ryadok(const Ryadok& other);//Конструктор копіювання
	
	int Dovgina(const char* str);//знаходження довжини рядка
	
	Ryadok operator +(const Ryadok& other);//перенавантаження оператора додавання
	
	Ryadok& operator=(const Ryadok& other);
	
	Ryadok& operator-(const char vidyemnuk);
	
	void Print();
	
	~Ryadok();//Диструктор
	
}; 

