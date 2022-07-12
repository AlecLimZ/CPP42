/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:10:44 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/07 16:20:29 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
#include <iostream>
#include <fstream>

Replace::Replace(std::string filename)
{
	this->_filename = filename;
	this->_ifs.open(this->_filename);
	if (!_ifs)
	{
		std::cerr << "Error: filename does not exist\n";
		this->_ifs.close();
		exit(0);
	}
}

void	Replace::R_copy(std::string str1, std::string str2)
{
	std::string	newfile = ".replace";
	std::string	line;
	std::size_t	found;
	std::string	search;
	std::string	change = "";
	std::string	tmp;
	int	find = 0;

	search = str1;
	if (this->_ifs)
	{
		this->_filename.append(newfile);
		this->_ofs.open(this->_filename);
		if (this->_ofs)
		{
			while (getline(_ifs, line))
			{
				while ((found = line.find(search)) != std::string::npos)
				{
					find++;
					tmp = line.substr(0, found);
					tmp = tmp + str2;
					change = change + tmp;
					line = line.substr(found + search.length());
				}
				if (_ifs.eof())
					_ofs << change << line;
				else
					_ofs << change << line << "\n";
			}
		}
		if (find == 0)
			std::cerr << "ALERT: str1 not found in the filename's content" << std::endl;
	}
	else
		std::cerr << "Cannot read file" << std::endl;
	this->_ifs.close();
	this->_ofs.close();
}
