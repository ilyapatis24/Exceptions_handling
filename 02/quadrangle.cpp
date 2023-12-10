#include "quadrangle.h"

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D, bool is_valid)
{
    a_ = a;
    b_ = b;
    c_ = c;
    d_ = d;
    A_ = A;
    B_ = B;
    C_ = C;
    D_ = D;
    name = "Четырехугольник";
    count = 4;

    if (is_valid)
    {
        exp_figure_quadrangle();
    }
}

int Quadrangle::get_a() 
{ 
    return a_; }

int Quadrangle::get_b() 
{ 
    return b_; }

int Quadrangle::get_c() 
{ 
    return c_; }

int Quadrangle::get_d() 
{ 
    return d_; }

int Quadrangle::get_A() 
{ 
    return A_; }

int Quadrangle::get_B() 
{ 
    return B_; }

int Quadrangle::get_C() 
{ 
    return C_; }

int Quadrangle::get_D() 
{ 
    return D_; }

string Quadrangle::get_name() 
{ 
    return name; }

void Quadrangle::print_info()
{
    cout << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << endl;
    cout << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << endl << endl;
}


void Quadrangle::exp_figure_quadrangle()
{
    if ((A_ + B_ + C_ + D_) != 360)
    {
        throw FugureException("Ошибка создания фигуры. Причина: сумма углов не равна 360\n");
    }
}