/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:00:19 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/18 15:54:01 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serial.hpp"

void	ft_object(void)
{
	Data2 *A = new Data2("Jack", 20, 77.7);

	cout << CYAN << "Address of Data A: " << A << DEF << endl;
	cout << *A << endl;

	//convert Data2 A to uintptr_t
	uintptr_t s = serializeobj(A);

	//convert s to another new Data pointer
	Data2 *B = deserializeobj(s);
	cout << CYAN << "Address of Data B: " << B << DEF << endl;
	cout << *B << endl;

	//typeid
	if (typeid(A) == typeid(B))
		cout << GRN << "Both are same!" << endl;
	else
		cout << RED << "Sorry both A and B object are not same" << endl;
	cout << DEF;
}

void	ft_struct(void)
{
	Data dstruct = {"JackS", 22, 88.88};
	Data *structA = &dstruct;

	cout << CYAN << "Address of Data A(struct): " << structA << DEF << endl;
	cout << *structA << endl;

	//convert Data2 A to uintptr_t
	uintptr_t s = serialize(structA);

	//convert s to another new Data pointer
	Data *structB = deserialize(s);
	cout << CYAN << "Address of Data B(struct): " << structB << DEF << endl;
	cout << *structB << endl;

	//typeid
	if (typeid(structA) == typeid(structB))
		cout << GRN << "Both are same!" << endl;
	else
		cout << RED << "Sorry both A and B object are not same" << endl;
	cout << DEF;
}

int main(void)
{
	cout << BYLW << "\nxxxxxxStructxxxxxx" << DEF << endl;
	ft_struct();
	cout << BYLW << "\nxxxxxxClass Objectxxxxxx" << DEF << endl;
	ft_object();
	return (0);
}
