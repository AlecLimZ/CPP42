/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subclass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:46:13 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/06 14:40:17 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Cat
{
	public:
		class Leg
		{
			public:
				Leg(){
					cout << "CatLeg" << endl;
				}
				~Leg(){};
		};
		Cat(){
			cout << "Cat" << endl;
		};
		~Cat(){};
};

int main(void)
{
//	Cat xcat;
	Cat::Leg xleg;
}
