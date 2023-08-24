#ifndef INPUTFILE_H
#define INPUTFILE_H

#pragma once

#include <string>
#include <iostream>
#include <fstream>

class InputFile
{
    public:
        InputFile(char *file_path);
        ~InputFile();
		std::string	to_string();
		bool	check_valide_file() const;
    private:
		std::ifstream	_file;
};

#endif