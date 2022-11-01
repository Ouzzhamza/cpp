

#include "Intern.hpp"

Inter::Intern() {}


Intern::~Inter() {}

Intern::Intern(Inter const& obj)
{
	*this = obj;
}

Intern& Intern::operator= (Inter const& obj)
{
	(void) obj;
	return (*this);
}
