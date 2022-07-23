/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:32:08 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/23 15:34:05 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample.hpp"

int main(void)
{
	Sample instance1(42);
	Sample instance2(42);

	if (&instance1 == &instance1)
		std::cout << "instance 1 " << &instance1 << " and instance 1 are physically equal" << std::endl;
	else
		std::cout << "instance 1 and instance 1 are not physically equal" << std::endl;

}
