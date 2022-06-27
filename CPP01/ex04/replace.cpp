/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:57:34 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/27 21:19:07 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

Replace::Replace(std::string filename)
{
	this->_filename = filename;
	std::cout << "c_replace: this construstor is created" << std::endl;
	this->_ifs.open(this->_filename);
	if (!_ifs)
	{
		std::cerr << "Error: filename does not exist\n";
		this->_ifs.close();
		exit(0);
	}
}

Replace::~Replace(void)
{
	this->_ifs.close();
	std::cout << "replace object ended here" << std::endl;
}

void	Replace::R_copy(void)
{
	std::string	newfile = "new";
	std::string	line;
	std::size_t	found;
	std::string search;

	search = "you";
	if (this->_ifs)
	{
		newfile.append(this->_filename);
		this->_filename = newfile;
		this->_ofs.open(this->_filename);
		if (this->_ofs)
		{
			while (getline(_ifs, line))
			{
				found = line.find(search);
				if (found != std::string::npos)
				{
					std::cout << "\"you\" found at: " << found << std::endl;
					std::string change = line.substr(0, found);
					change = change + "me";
					change = change + line.substr(found + search.length());
					std::cout << "final: " << change << std::endl;
					this->_ofs << change << "\n";
				}
				else
					_ofs << line << "\n";
			}
		}
	}
	else
		std::cerr << "Cannot read file" << std::endl;
	this->_ifs.close();
	this->_ofs.close();
}
