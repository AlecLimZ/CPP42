/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:59:54 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/06 19:32:48 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

typedef struct	s_prv
{
	std::string	phone;
	std::string secret;
}	t_prv;

class Contact
{
	public:
		std::string first;
		std::string last;
		std::string nickname;
		void	addprv(std::string x, std::string y);
		void	displayphone(void);
		void	displaysecret(void);
	private:
		std::string	_phone;
		std::string	_secret;
};

class PhoneBook
{
	public:
		int	total;
		Contact	Contat[8];
		void	Pb_input(std::string s1, int i, t_prv *prv);
		void	Pb_add(int i);
		void	Pb_search(void);
};
