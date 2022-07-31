/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:46:04 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/29 18:19:32 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

using namespace std;

#include <iostream>
#include <string>
#include <cstring>

class Money
{
	public:
		Money():dollar(0), cent(0){};
		Money(int d, int c);
		Money(int allc);

		Money operator+(const Money & mo2) const;
		Money operator-(const Money & mo2) const;
		Money operator-() const;
		bool operator==(const Money & mo2) const;
	private:
		int dollar;
		int cent;
};

Money::Money(int d, int c)
{
	dollar = d;
	cent = c;
}

Money::Money(int allc)
{
	dollar = allc / 100;
	cent = allc % 100;
}

Money Money::operator+(const Money & mo2) const
{
	int total = (dollar * 100 + cent) +
		(mo2.dollar * 100 + mo2.cent);
	Money local(total);
	return local;
}

Money Money::operator-(const Money & mo2) const
{
	int diff = (dollar * 100 + cent) -
		(mo2.dollar * 100 + mo2.cent);
	Money local(diff);
	return local;
}

Money Money::operator-() const
{
	int neg = - (dollar * 100 + cent);
	Money local(neg);
	return local;
}

bool Money::operator==(const Money & mo2) const
{
	int thistotal = (dollar * 100 + cent);
	int m2total = (mo2.dollar * 100 + mo2.cent);
	return (thistotal == m2total);
}

int main(void)
{
	Money a;
}
