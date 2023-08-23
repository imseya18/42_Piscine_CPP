#ifndef INPUTFILE_H
#define INPUTFILE_H

#pragma once

#include <string>
#include <iostream>
#include <fstream>

class inputFile
{
    public:
        inputFile(char *file_path);
        ~inputFile();
		std::string	to_string();
		bool	check_valide_file() const;
    private:
		std::ifstream	_file;
};

#endif