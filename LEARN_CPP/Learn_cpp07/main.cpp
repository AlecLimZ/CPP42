/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:05:30 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/22 12:49:50 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::endl;
using std::cout;
using std::string;

template <typename T, typename U>
class Pair
{
	public:
		Pair<T, U>(T const & lhs, U const & rhs): _lhs(lhs), _rhs(rhs)
		{
			cout << "Generic template" << endl;	
			return;
		}
		~Pair<T, U>(void){}

		T const & fst(void) const { return this->_lhs; }
		U const & snd(void) const { return this->_rhs;}
	private:
		T const  _lhs;
		U const  _rhs;
		Pair<T, U>(void);
};

template <typename T, typename U>
std::ostream & operator<<(std::ostream & o, Pair<T, U> const & p)
{
	o << "Pari(" << p.fst() << ", " << p.snd() << " )";
	return o;
}

// partial specialisation
template <typename U>
class Pair<int, U>
{
	public:
		Pair<int, U>(int const & lhs, U const & rhs): _lhs(lhs), _rhs(rhs)
		{
			cout << "Int partial specialization" << endl;
			return ;
		}
		~Pair<int, U>(void){}

		int const & fst(void) const {return this->_lhs;}
		U const & snd(void) const { return this->_rhs; }
	private:
		int const _lhs;
		U const _rhs;
		Pair<int, U>(void);
};

template<>
class Pair<bool, bool>
{
	public:
		Pair<bool, bool>(bool lhs, bool rhs): _lhs(lhs), _rhs(rhs)
		{
			cout << "bool/ bool full specialization" << endl;
			this->_n = 0;
			this->_n |= static_cast<int>(lhs) << 0;
			this->_n |= static_cast<int>(rhs) << 1;
			return ;
		}
		~Pair<bool, bool>(void){}
		bool fst(void) const { return (this->_n & 0x01);}
		bool snd(void) const { return (this->_n & 0x02);}
	private:
		int	_n;
		bool _lhs;
		bool _rhs;
		Pair<bool, bool>(void);
};

std::ostream & operator<<(std::ostream & o, Pair<bool, bool>const &p)
{
	o << std::boolalpha << "Pari(" << p.fst() << ", " << p.snd() << " )";
	return o;
}

int main(void)
{
	Pair<int, int> p1(3, 4);
	Pair<string, float> p2((string)"pi", 3.14f);
	Pair<float, bool> p3(4.2f, true);
	Pair<bool, bool> p4 (true, false);

	cout << p1 << endl;
	cout << p2 << endl;
	cout << p3 << endl;
	cout << p4 << endl;
}
