/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:11:43 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/07 16:13:08 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

class Replace
{
	std::string 	_filename;
	std::ifstream	_ifs;
	std::ofstream	_ofs;
	public:
		Replace(std::string filename);
		void	R_copy(std::string str1, std::string str2);
};
