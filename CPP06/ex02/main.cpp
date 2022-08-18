/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:52:15 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/18 15:50:58 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identitfy.hpp"

int main(void)
{
	srand(time(0)); // for seed pure random
	
	Base *objptr = generate();
	Base *objnull = NULL;
	Base & objref = *(generate());

	identify(objnull); // check when the pointer is NULL
	identify(objptr); // detect it is pointer type
	identify(objref); // detect it is reference type
}
