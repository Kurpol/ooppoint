#include <iostream>

class Number1
{
private:
	int number1;

public:
	Number1() :number1(2)
	{
		std::cout << "Konst1 " << std::endl;
	}
	Number1(int &number):number1(number)
	{
		std::cout << "Konstryktor 1 " << std::endl;
		std::cout << "number1 " << number1 << std::endl;
	}
	~Number1()
	{
		std::cout << "Destryktor 1 " << std::endl;
	}

	void setNumber(int number)
	{
	}

	int getNumber()
	{
		return number1;
	}
};

class Number2:public Number1
{
private:

	const int number2;


public:
	Number2() :number2(3)
	{
		std::cout << "Konst2 " << std::endl;
	}
	Number2(int &number):number2(number)
	{
		std::cout << "Konstryktor 2 " << std::endl;
		std::cout << "number2 " << number2 << std::endl;
	}
	~Number2()
	{
		std::cout << "Destryktor 2 " << std::endl;
	}

	void setNumber(int number)
	{
	}

	int getNumber()
	{
		return number2;
	}
};


template <class T1, class T2>
int calc(T1& t1, T2& t2)
{
	return t1 + t2;
}

template<class T1, class T2>
int operator+(T1& t1, T2& t2)
{
	return t1.getNumber() + t2.getNumber();
}


int main(int argc, char* argv[])
{
	int zero = 0;

	Number1 number1;
	Number2 number2;

	int result = calc(number1, number2);

	std::cout << result << std::endl;
	return 0;
}