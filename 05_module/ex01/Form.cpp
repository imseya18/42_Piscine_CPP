#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute): _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{

}
Form::Form(Form const & src): _name(src._name), _is_signed(src._is_signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{

}

Form::~Form()
{

}

void Form::displayInfo()
{
	std::cout << this->_name << "\n" << this->_gradeToExecute << "\n" << this->_gradeToSign << std::endl;
}