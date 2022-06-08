
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:24:13 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/08 20:19:44 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook Constructor created" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook aka destructor is created" << std::endl;
}

Contact::Contact(void)
{
	std::cout << "Contact Constructor created" << std::endl;
	this->_phone = 0;
}

void	Contact::addprv(int x, std::string y)
{
	this->_phone = x;
	this->_secret = y;
}

void	Contact::printC(void) const
{
	std::cout << "private ph: " << this->_phone << std::endl;
	std::cout << "private _secret " <<  this->_secret << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact aka destructor is created" << std::endl;
}

void	ft_add(PhoneBook *Pb, int i)
{
	int			phone;
	std::string secret;

	Pb->total++;
	std::cout << "First name ->: ";
	std::cin >> Pb->Contact[i].first;
	std::cout << "Last name ->: ";
	std::cin >> Pb->Contact[i].last;
	std::cout << "Nickname ->: ";
	std::cin >> Pb->Contact[i].nickname;
	std::cout << "Phone Number ->: ";
	std::cin >> phone;
	std::cout << "What is your dark secret? ->:";
	std::cin.ignore();
	getline(std::cin, secret);
	Pb->Contact[i].addprv(phone, secret);
	Pb->Contact[i].printC();
}

int	main(void)
{
	PhoneBook	Pb;
	int		index;
	std::string exit;
	std::string input;

	index = 0;
	exit = "EXIT";
	while (1)
	{
		std::cin >> input;
		if (input.compare("ADD") == 0)
		{
			ft_add(&Pb, index);
			index++;
			//std::cout << "end here?" << std::endl;
		}
		else if (input.compare("EXIT") == 0)
			break;
		else
			std::cout << "Error input: Please type either ADD, SEARCH & EXIT\n";
	}

	return (0);
}
