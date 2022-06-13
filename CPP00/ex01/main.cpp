
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:24:13 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/13 16:19:26 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip> // to able to use namespace std's setw
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
}

void	Contact::addprv(std::string x, std::string y)
{
	this->_phone = x;
	this->_secret = y;
}

void	PhoneBook::Pb_search(void)
{
	std::cout << "|" << std::right << std::setw(10) << "INDEX";
	for (int i = 0; i < this->total; i++)
		std::cout << "|" << std::right << std::setw(10) << i + 1;

	std::cout << "|" << std::endl;

	std::cout << "|" << std::right << std::setw(10) << "FIRST NAME";
	for (int i = 0; i < this->total; i++)
		std::cout << "|" << std::right << std::setw(10) << this->Contact[i].first;

	std::cout << "|" << std::endl;
	
	std::cout << "|" << std::right << std::setw(10) << "LAST NAME";
	for (int i = 0; i < this->total; i++)
		std::cout << "|" << std::right << std::setw(10) << this->Contact[i].last;

	std::cout << "|" << std::endl;

	std::cout << "|" << std::right << std::setw(10) << "NICKNAME";
	for (int i = 0; i < this->total; i++)
		std::cout << "|" << std::right << std::setw(10) << this->Contact[i].nickname;

	std::cout << "|" << std::endl;
	
	std::cout << "|" << std::right << std::setw(10) << "PHONE";
	for (int i = 0; i < this->total; i++)
		this->Contact[i].displayphone();

	std::cout << "|" << std::endl;
	
	std::cout << "|" << std::right << std::setw(10) << "SECRET";
	for (int i = 0; i < this->total; i++)
		this->Contact[i].displaysecret();
	
	std::cout << "|" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact aka destructor is created" << std::endl;
}

void	Contact::displayphone(void)
{
	std::cout << "|" << std::right << std::setw(10) << this->_phone;
}

void	Contact::displaysecret(void)
{
	std::cout << "|" << std::right << std::setw(10) << this->_secret;
}

void	PhoneBook::Pb_input(std::string s1, int i, t_prv *prv)
{
	int flag = 1;
	static int n = 0;

	while (flag)
	{
		std::cout << s1;
		std::cin.ignore(0);
		if (n == 0)
			getline(std::cin, this->Contact[i].first);
		else if (n == 1)
			getline(std::cin, this->Contact[i].last);
		else if (n == 2)
			getline(std::cin, this->Contact[i].nickname);
		else if (n == 3)
			getline(std::cin, prv->phone);
		else if (n == 4)
			getline(std::cin, prv->secret);
		if ((this->Contact[i].first == ""  && n == 0) ||
			(this->Contact[i].last == "" && n == 1) ||
			(this->Contact[i].nickname == "" && n == 2) ||
			(prv->phone == "" && n == 3) ||
			(prv->secret == "" && n == 4))
			std::cout << "This field cannot be empty. Please input again" << std::endl;
		else
			flag = 0;
	}
	n++;
	if (n == 5)
		n = 0;

}

void	PhoneBook::Pb_add(int i)
{
	t_prv	prv;

	this->total++;
	if (this->total > 8)
		this->total = 8;
	std::cin.ignore();
	Pb_input("First name ->: ", i, &prv);
	Pb_input("Last name ->: ", i, &prv);
	Pb_input("Nickname ->: ", i, &prv);
	Pb_input("Phone Number ->: ", i, &prv);
	Pb_input("What is your dark secret? ->: ", i, &prv);
	
	this->Contact[i].addprv(prv.phone, prv.secret);
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
		getline(std::cin, input);
		if (input.compare("ADD") == 0)
		{
			if (index == 8)
				index = 0;
			Pb.Pb_add(index);
			index++;
		}
		else if (input.compare("EXIT") == 0)
			break;
		else if (input.compare("SEARCH") == 0)
			Pb.Pb_search();
		else
			std::cout << "Error input: Please type either ADD, SEARCH & EXIT\n";
	}
	return (0);
}
