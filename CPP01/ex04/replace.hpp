/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:54:19 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/27 21:19:17 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream> // need for file steam

class Replace
{
	std::string _filename;
	std::ifstream _ifs;
	std::ofstream _ofs;
	public:
		Replace(std::string filename);
		~Replace(void);
		void	R_copy(void);
};
