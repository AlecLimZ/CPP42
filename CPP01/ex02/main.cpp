/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:13:47 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/04 13:26:42 by leng-chu         ###   ########.fr       */
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

	std::cout << "\n==VAlUE OF STRING VARIABLE==" << std::endl;
	std::cout << "brain: " << brain << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
	
	return (0);
}
