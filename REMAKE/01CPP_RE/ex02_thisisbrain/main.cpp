/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:52:40 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/07 13:56:05 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = NULL;
	std::string& stringREF = brain;

	stringPTR = &brain;

	std::cout << "\n==MEMORY ADDRESS==" << std::endl;
	std::cout << "brain: " << &brain << std::endl;

	// need to print PTR's own memory address
	std::cout << "stringPTR: " << &stringPTR << std::endl;
	std::cout << "stringREF: " << &stringREF << std::endl;

	std::cout << "\n==VALUE OF STRING VARIABLE==" << std::endl;
	std::cout << "brain: " << brain << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
	return (0);
}
