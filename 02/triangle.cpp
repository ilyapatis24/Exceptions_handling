#include "triangle.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C, bool is_valid)
{
	a_ = a;
	b_ = b;
	c_ = c;
	A_ = A;
	B_ = B;
	C_ = C;
	name = "Треугольник";
	count = 3;
	if (is_valid)
	{
		exp_figure();
	}
}

int Triangle::get_a()
{
	return a_;
}

int Triangle::get_b()
{
	return b_;
}

int Triangle::get_c()
{
	return c_;
}

int Triangle::get_A()
{
	return A_;
}

int Triangle::get_B()
{
	return B_;
}

int Triangle::get_C()
{
	return C_;
}

string Triangle::get_name()
{
	return name;
}

void Triangle::print_info()
{
	cout << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << endl;
	cout << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << endl << endl;
}

void Triangle::exp_figure()
{
	if ((A_ + B_ + C_) != 180 && count == 3)
	{
		throw FugureException("Ошибка создания фигуры. Причина: сумма углов не равна 180\n");
	}
}