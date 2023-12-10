#pragma once
#include <iostream>
#include "fugure_exception.h"

using namespace std;

class Quadrangle
{
public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D, bool is_valid = true);

    int get_a();
    int get_b();
    int get_c();
    int get_d();
    int get_A();
    int get_B();
    int get_C();
    int get_D();
    string get_name();

    virtual void print_info();

    virtual void exp_figure_quadrangle();

protected:
    int a_, b_, c_, d_, A_, B_, C_, D_;
    string name;
    int count;
};