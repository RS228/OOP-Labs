class Expression
{
private:
    double _a, _b, _c, _d;
public:
    double GetA();

    double GetB();

    double  GetC();

    double  GetD();

    void SetA(double value);

    void SetB(double value);

    void SetC(double value);

    void SetD(double value);

    Expression();

    Expression(float a, float b, float c, float d);

    double Count();

};

