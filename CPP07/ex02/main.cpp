/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:07:23 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/23 18:04:56 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int rs; // random size global variable
void	name(char const *s) { cout << "|||" << s << "|||" << endl; }
void	block(void) { for (int i = 0; i < 50; i++) cout << "="; cout << endl; }

void test_char(void)
{
	try
	{
		Array<char> Achar; // constructor with no parameter
		::name("Achar");
		cout << Achar << endl;

		Array<char> Bchar(::rs); // constructor with parameter
		::name("Bchar");
		for (int i = 0; i < ::rs; i++)
			Bchar[i] = rand() % (122 - 65 + 1) + 65; // call non-const operator[]
		cout << Bchar << endl;

		Achar = Bchar; // call copy assignment
		::name("Achar");
		cout << Achar << endl;

		Array<char> Cchar(Achar); // call copy constructor
		::name("Cchar");
		cout << Cchar << endl;

		// will throw error due to it trys to access the index out of size range
		for (int i = 0; i < ::rs + 42; i++)
			Cchar[i];
	}
	catch (std::exception & e)
	{
		cout << e.what() << endl;
	}
}

void test_int(void)
{
	try
	{
		Array<int> Aint; // constructor with no parameter
		::name("Aint");
		cout << Aint << endl;

		Array<int> Bint(::rs); // constructor with parameter
		::name("Bint");
		for (int i = 0; i < ::rs; i++)
			Bint[i] = rand() % 100 + 1; // call non-const operator[]
		cout << Bint << endl;

		Aint = Bint; // call copy assignment
		::name("Aint");
		cout << Aint << endl;

		Array<int> Cint(Aint); // call copy constructor
		::name("Cint");
		cout << Cint << endl;

		// will throw error due to it trys to access the index out of size range
		for (int i = 0; i < ::rs + 42; i++)
			Cint[i];
	}
	catch (std::exception & e)
	{
		cout << e.what() << endl;
	}
}

void test_float(void)
{
	try
	{
		float box[] = {1.11, 2.22, 3.33, 4.44, 5.55, 6.66, 7.77, 8.88, 9.99};
		Array<float> Afloat; // constructor with no parameter
		::name("Afloat");
		cout << Afloat << endl;

		Array<float> Bfloat(::rs); // constructor with parameter
		::name("Bfloat");
		for (float i = 0; i < ::rs; i++)
			Bfloat[i] = floorf(box[rand() % 9] * 100) / 100; // call non-const operator[]
		cout << Bfloat << endl;

		Afloat = Bfloat; // call copy assignment
		::name("Afloat");
		cout << Afloat << endl;

		Array<float> Cfloat(Afloat); // call copy constructor
		::name("Cfloat");
		cout << Cfloat << endl;

		// will throw error due to it trys to access the index out of size range
		for (int i = 0; i < ::rs + 42; i++)
			Cfloat[i];
	}
	catch (std::exception & e)
	{
		cout << e.what() << endl;
	}
}

void test_string(void)
{
	try
	{
		string box[] = {
			"42KL", "BEST", "LOL",
			"Hahah", "Jeff", "Thila",
			"Tzer", "Lynn", "Bocal-X"
		};

		Array<string> Astring; // constructor with no parameter
		::name("Astring");
		cout << Astring << endl;

		Array<string> Bstring(::rs); // constructor with parameter
		::name("Bstring");
		for (int i = 0; i < ::rs; i++)
			Bstring[i] = box[rand() % 9]; // call non-const operator[]
		cout << Bstring << endl;

		Astring = Bstring; // call copy assignment
		::name("Astring");
		cout << Astring << endl;

		Array<string> Cstring(Astring); // call copy constructor
		::name("Cstring");
		cout << Cstring << endl;

		// will throw error due to it trys to access the index out of size range
		for (int i = 0; i < ::rs + 42; i++)
			Cstring[i];
	}
	catch (std::exception & e)
	{
		cout << e.what() << endl;
	}
}

void test_bool(void)
{
	try
	{
		bool box[] = {
			true, false,
		};

		Array<bool> Abool; // constructor with no parameter
		::name("Abool");
		cout << Abool << endl;

		Array<bool> Bbool(::rs); // constructor with parameter
		::name("Bbool");
		for (int i = 0; i < ::rs; i++)
			Bbool[i] = box[rand() % 2]; // call non-const operator[]
		cout << Bbool << endl;

		Abool = Bbool; // call copy assignment
		::name("Abool");
		cout << Abool << endl;

		Array<bool> Cbool(Abool); // call copy constructor
		::name("Cbool");
		cout << Cbool << endl;

		// will throw error due to it trys to access the index out of size range
		for (int i = 0; i < ::rs + 42; i++)
			Cbool[i];
	}
	catch (std::exception & e)
	{
		cout << e.what() << endl;
	}
}

int main(void)
{
	srand(time(0));
	::rs = rand() % 5 + 1;
	test_char();
	::block();
	::rs = rand() % 5 + 1;
	test_int();
	::block();
	::rs = rand() % 5 + 1;
	test_float();
	::block();
	::rs = rand() % 5 + 1;
	test_string();
	::block();
	::rs = rand() % 5 + 1;
	test_bool();
	return (0);
}
