/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:02:51 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/05 14:06:43 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact(void)
{
	std::cout << "contact constructor" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "destructor contact" << std::endl;
}

PhoneBook::PhoneBook(void)
{
	std::cout << "phonebook constructor" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "phonebok destructor" << std::endl;
}
