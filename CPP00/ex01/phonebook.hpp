/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:13:42 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/08 20:19:51 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class	Contact
{
	public:
		std::string	first;
		std::string	last;
		std::string	nickname;
		Contact(void);
		~Contact(void);
		void addprv(int x, std::string y);
		void printC(void) const;
	private:
		int			_phone;
		std::string	_secret;
		
};

class	PhoneBook
{
	public:
		int	total;
		Contact Contact[8];
		PhoneBook(void);
		~PhoneBook(void);
};

#endif
