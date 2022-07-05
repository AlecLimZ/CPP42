/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:59:54 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/05 14:06:59 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
};

class PhoneBook
{
	public:
		Contact Contact[8];
		PhoneBook(void);
		~PhoneBook(void);
};
