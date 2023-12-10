#pragma once
#include <iostream>
#include "fugure_exception.h"

using namespace std;

class Triangle
{
public:
	Triangle(int a, int b, int c, int A, int B, int C, bool is_valid = true);
	int get_a();
	int get_b();
	int get_c();
	int get_A();
	int get_B();
	int get_C();
	string get_name();

	virtual void print_info();

	virtual void exp_figure();

protected:
	int count;
	int a_, b_, c_, A_, B_, C_;
	string name;
};