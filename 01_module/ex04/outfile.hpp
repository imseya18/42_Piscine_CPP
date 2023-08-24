#ifndef OUTFILE_H
#define OUTFILE_H

#pragma once

#include <string>
#include <iostream>
#include <fstream>

class Outfile
{
    public:
        Outfile(std::string str);
        ~Outfile();
		void	strToFile(std::string str);
		bool	check_valide_file()	const;
    private:
		std::ofstream 	_out_file;
};

#endif