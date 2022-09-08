/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:05:51 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/08 18:27:57 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

#include <stack>
using std::stack;

int main(void)
{
	std::stack<int> c1;
	MutantStack<int> test;
	c1.push(5);
	test.push(5);
	cout << "stack c1: " << c1.size() << '\n';
	cout << "mystack size: " << test.size() << endl;
	cout << "stack typeid c1: " << typeid(c1).name() << endl;
	cout << "mystack typeid: " << typeid(test).name() << endl;
	c1.push(100);
	test.push(100);
	cout << "stack top c1: " << c1.top() << endl;
	cout << "mystack top: " << test.top() << endl;
	cout << "stack c1: " << c1.size() << '\n';
	cout << "mystack size: " << test.size() << endl;
	c1.pop();
	test.pop();
	cout << "stack top c1: " << c1.top() << endl;
	cout << "mystack top: " << test.top() << endl;
	cout << "stack c1: " << c1.size() << '\n';
	cout << "mystack size: " << test.size() << endl;
	cout << "stack empty? c1: " << c1.empty() << endl;
	cout << "mystack empty? : " << test.empty() << endl;
	c1.pop();
	test.pop();
	cout << "stack empty? c1: " << c1.empty() << endl;
	cout << "mystack empty? : " << test.empty() << endl;

	deque<int> deq;
	deq.push_back(44);
	deq.push_back(-44);
	deq.push_back(404);

	vector<int> vec;
	vec.push_back(44);
	vec.push_back(-44);
	vec.push_back(404);
	vec.push_back(44);
	vec.push_back(-44);

	list<int> lis;
	lis.push_back(1);
	lis.push_back(100);

	stack<int> c2(deq);
	stack<int, vector<int> > c3(vec);
	stack<int, list<int> > c4(lis);
	cout << "stack(deque) c2: " << c2.size() << endl;
	cout << "stack(vector) c3: " << c3.size() << endl;
	cout << "stack(vector) c3 typeid: " << typeid(c3).name() << endl;
	cout << "stack(list) c4: " << c3.size() << endl;
}
