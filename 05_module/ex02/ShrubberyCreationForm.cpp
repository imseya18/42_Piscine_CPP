#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm::AForm("", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name): AForm::AForm(name, 145, 137)
{
	this->_target = name;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm::AForm(src)
{
    *this = src;
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

bool ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (checkIsExecutable(executor.getGrade()) == true)
	{
		std::string file_name = executor.getName() + "_shrubbery";
		std::ofstream out_file(file_name.c_str());

		if(out_file.is_open() == true)
		{
			out_file << "      /\\    \n"
			            "     /\\*\\   \n"
    	                "    /\\O\\*\\    \n"
    	                "   /*/\\/\\/\\   \n"
    	                "  /\\O\\/\\*\\/\\  \n"
    	                " /\\*\\/\\*\\/\\/\\ \n"
    	                "/\\O\\/\\/*/\\/O/\\ \n"
    	                "      ||      \n"
    	                "      ||      \n"
    	                "      ||      ";
			if(out_file.is_open() == true)
				out_file.close();
			return true;
		}
		else
		{
			std::cout << "error: cannot open " << file_name << std::endl;
			return false;
		}
	}
	return false;
}

ShrubberyCreationForm&     ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	this->_target = rhs._target;
	return *this;
}

std::ostream &	operator<<(std::ostream & o, ShrubberyCreationForm const & rhs)
{
	o 	<< "target name: " <<  rhs.getTarget() << "\n"
		<< "is signed: " << rhs.getSigned() << "\n"
		<< "grade to sign: " << rhs.getGradeToSign() << "\n"
		<< "grade to execute: " << rhs.getGradeToExecute();
	return o;
}