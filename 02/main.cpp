#include "rectangular_triangle.h"
#include "equilateral_triangle.h"
#include "rectangle.h"
#include "square.h"


void print_info(Triangle& figure)
{
	cout << figure.get_name() << ": " << endl;
	figure.print_info();
};

void print_info1(Quadrangle& figure)
{
    cout << figure.get_name() << ": " << endl;
    figure.print_info();
};

int main()
{
    setlocale(LC_ALL, "Russian");
    try
    {
        Triangle triangle(10, 20, 30, 50, 60, 70);
        print_info(triangle);
    }
    catch (const exception& e)
    {
        cout << e.what() << endl;
    }

    try
    {
        RectangularTriangle rectangularTriangle(10, 20, 30, 50, 60);
        print_info(rectangularTriangle);
    }
    catch (exception& e)
    {
        cout << e.what() << endl;
    }

    try
    {
        IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
        print_info(isoscelesTriangle);
    }
    catch (exception& e)
    {
        cout << e.what() << endl;
    }

    try
    {
        EquilateralTriangle equilateralTriangle(30);
        print_info(equilateralTriangle);
    }
    catch (exception& e)
    {
        cout << e.what() << endl;
    }
    
    try
    {
        Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
        print_info1(quadrangle);
    }
    catch (exception& e)
    {
        cout << e.what() << endl;
    }

    try
    {
        Rectangle rectangle(10, 20);
        print_info1(rectangle);
    }
    catch (exception& e)
    {
        cout << e.what() << endl;
    }
    
    try
    {
        Square square(20);
        print_info1(square);
    }
    catch (exception& e)
    {
        cout << e.what() << endl;
    }

    try
    {
        Parallelogram parallelogram(20, 30, 30, 40);
        print_info1(parallelogram);
    }
    catch (exception& e)
    {
        cout << e.what() << endl;
    }

    try
    {
        Rhomb rhomb(30, 30, 40);
        print_info1(rhomb);
    }
    catch (exception& e)
    {
        cout << e.what() << endl;
    }
    return 0;
};