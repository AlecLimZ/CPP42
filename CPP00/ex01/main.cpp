
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:24:13 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/14 18:04:11 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip> // to able to use namespace std's setw
#include "phonebook.hpp"

void	Contact::addprv(std::string x, std::string y)
{
	this->_phone = x;
	this->_secret = y;
}

void	ft_tmp(std::string str)
{
	int i = 9;

	str[i] = '.';
	while (str[++i])
		str[i] = '\0';
	std::cout << "|" << std::right << std::setw(10) << str;
}

void	PhoneBook::Pb_search(void)
{
	std::cout << "|" << std::right << std::setw(10) << "INDEX";
	std::cout << "|" << std::right << std::setw(10) << "FIRST NAME";
	std::cout << "|" << std::right << std::setw(10) << "LAST NAME";
	std::cout << "|" << std::right << std::setw(10) << "NICKNAME";
	
	std::cout << "|" << std::endl;
	
	for (int i = 0; i < this->total; i++)
	{
		std::cout << "|" << std::right << std::setw(10) << i + 1;
		if (this->Contact[i].first.length() > 10)
			ft_tmp(this->Contact[i].first);
		else
			std::cout << "|" << std::right << std::setw(10) << this->Contact[i].first;
		if (this->Contact[i].last.length() > 10)
			ft_tmp(this->Contact[i].last);
		else
			std::cout << "|" << std::right << std::setw(10) << this->Contact[i].last;
		if (this->Contact[i].nickname.length() > 10)
			ft_tmp(this->Contact[i].nickname);
		else
			std::cout << "|" << std::right << std::setw(10) << this->Contact[i].nickname;
		std::cout <<  "|" << std::endl;
	}

	int	i = 0;

	while (1)
	{
		std::cout << "Which index you want to view?: ";
		std::cin >> i;
		while (std::cin.fail())
    	{
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "You can only enter numbers.\n";
			std::cout << "Which index you want to view?: ";
			std::cin >> i;
    	}
		if (this->total == 0 )
		{
			std::cout << "Empty. Please add a new details by type ADD" << std::endl;
			break ;
		}
		else if (i <= 0 || i > total)
		{
			std::cout << "Error index. Please input only between 1 ~ " << this->total << std::endl;
			continue ;
		}
		else
		{
			std::cout << "First name: " << this->Contact[i - 1].first << std::endl;
			std::cout << "Last name: " << this->Contact[i - 1].last << std::endl;
			std::cout << "Nickname: " << this->Contact[i - 1].nickname << std::endl;
			this->Contact[i - 1].displayphone();
			this->Contact[i - 1].displaysecret();
			break ;
		}
	}
}

void	Contact::displayphone(void)
{
	std::cout << "Phone: " << this->_phone << std::endl;
}

void	Contact::displaysecret(void)
{
	std::cout << "Dark Secret: " << this->_secret << std::endl;
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
	std::cin.ignore(0);
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
		std::cout << "\nInput [ADD] | [SEARCH] | [EXIT]: ";
		getline(std::cin, input); // user's input
		if (input.compare("ADD") == 0) // if input "ADD", fill detail
		{
			if (index == 8)
				index = 0;
			Pb.Pb_add(index);
			index++;
		}
		else if (input.compare("EXIT") == 0) // if input "EXIT", program exits
			break;
		else if (input.compare("SEARCH") == 0) // "SEARCH" will display list of details
		{
			Pb.Pb_search();
			std::cin.ignore();
		}
		else
			std::cout << "Error input: Please type either ADD, SEARCH & EXIT\n";
	}
	return (0);
}
