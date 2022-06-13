/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:13:42 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/13 16:03:58 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

typedef struct	s_prv
{
	std::string phone;
	std::string	secret;
}	t_prv;

class	Contact
{
	public:
		std::string	first;
		std::string	last;
		std::string	nickname;
		Contact(void);
		~Contact(void);
		void addprv(std::string x, std::string y);
		void displayphone(void);
		void displaysecret(void);
	private:
		std::string	_phone;
		std::string	_secret;
		
};

class	PhoneBook
{
	public:
		int	total;
		Contact Contact[8];
		void Pb_input(std::string s1, int i, t_prv *prv);
		void Pb_add(int i);
		PhoneBook(void);
		~PhoneBook(void);
		void Pb_search(void);
};

#endif
