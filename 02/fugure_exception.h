#pragma once

#include <exception>
#include <stdexcept>

using namespace std;

class FugureException : public domain_error
{
public:
	FugureException(string what_arg);

};