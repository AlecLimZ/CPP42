/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:57:34 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/29 13:25:02 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

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
	std::string search;
	int find = 0;

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
	//				std::cout << "\"you\" found at: " << found << std::endl;
					std::string change = line.substr(0, found);
					change = change + str2; // this is how str2 replace str1
					change = change + line.substr(found + search.length());
	//				std::cout << "final: " << change << std::endl;
					line = change;
				}
				_ofs << line << "\n";
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
