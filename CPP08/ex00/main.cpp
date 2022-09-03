/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:02:30 by leng-chu          #+#    #+#             */
/*   Updated: 2022/09/03 11:28:38 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void	ft_checkfind(bool i, char const *msg)
{
	cout << CYAN << "===" << msg << "===" << DEF << endl;
	if (i)
		cout << GRN << "Found!\n" << DEF << endl;
	else 
		cout << RED << "Not found!\n" << DEF << endl;
}

void	msg(char const *msg)
{
	cout << YLW << "[][][][][] " << msg << " [][][][][]" << DEF << endl;
}

int main(void)
{
	msg("INT");
	vector<int> vec;
	for (int i = 0; i < 10; ++i)
		vec.push_back(i + 5);
	std::array<int, 5> arr = {5, 11, 55, 10, 6};
	std::deque<int> deq(arr.begin(), arr.end());
	std::forward_list<int> flist(vec.begin(), vec.end());
	std::list<int> list1(flist.begin(), flist.end());

	int v = 10;
	ft_checkfind(easyfind<vector<int> >(vec, v), "easyfind(vector)");
	ft_checkfind(std::count(vec.begin(), vec.end(), v), "std::count(vector)");
	ft_checkfind(easyfind<std::array<int, 5> >(arr, v), "easyfind(array)");
	ft_checkfind(std::count(arr.begin(), arr.end(), v), "std::count(array)");
	ft_checkfind(easyfind<std::deque<int> >(deq, v), "easyfind(deque)");
	ft_checkfind(std::count(deq.begin(), deq.end(), v), "std::count(deque)");
	ft_checkfind(easyfind<std::forward_list<int> >(flist, v), "easyfind(forward list)");
	ft_checkfind(std::count(flist.begin(), flist.end(), v), "std::count(forward list)");
	ft_checkfind(easyfind<std::list<int> >(list1, v), "easyfind(list)");
	ft_checkfind(std::count(list1.begin(), list1.end(), v), "std::count(list)");
	
	v = 4;
	ft_checkfind(easyfind<vector<int> >(vec, v), "easyfind(vector)");
	ft_checkfind(std::count(vec.begin(), vec.end(), v), "std::count(vector)");
	ft_checkfind(easyfind<std::array<int, 5> >(arr, v), "easyfind(array)");
	ft_checkfind(std::count(arr.begin(), arr.end(), v), "std::count(array)");
	ft_checkfind(easyfind<std::deque<int> >(deq, v), "easyfind(deque)");
	ft_checkfind(std::count(deq.begin(), deq.end(), v), "std::count(deque)");
	ft_checkfind(easyfind<std::forward_list<int> >(flist, v), "easyfind(forward list)");
	ft_checkfind(std::count(flist.begin(), flist.end(), v), "std::count(forward list)");
	ft_checkfind(easyfind<std::list<int> >(list1, v), "easyfind(list)");
	ft_checkfind(std::count(list1.begin(), list1.end(), v), "std::count(list)");

	msg("CHAR");
	std::string s = "42KL";
	char ch = '2';
	vector<char> vec2(s.begin(), s.end());
	std::array<char, 4> arr2 = {'4', '2', 'K', 'L'};
	std::deque<char> deq2(vec2.begin(), vec2.end());
	std::forward_list<char> flist2(arr2.begin(), arr2.end());
	std::list<char>list2(flist2.begin(), flist2.end());
	
	ft_checkfind(easyfind<vector<char> >(vec2, ch), "easyfind(vector)");
	ft_checkfind(std::count(vec2.begin(), vec2.end(), ch), "std::count(vector)");
	ft_checkfind(easyfind<std::array<char, 4> >(arr2, ch), "easyfind(array)");
	ft_checkfind(std::count(arr2.begin(), arr2.end(), ch), "std::count(array)");
	ft_checkfind(easyfind<std::deque<char> >(deq2, ch), "easyfind(deque)");
	ft_checkfind(std::count(deq2.begin(), deq2.end(), ch), "std::count(deque)");
	ft_checkfind(easyfind<std::forward_list<char> >(flist2, ch), "easyfind(forward_list)");
	ft_checkfind(std::count(flist2.begin(), flist2.end(), ch), "std::count(forward_list)");
	ft_checkfind(easyfind<std::list<char> >(list2, ch), "easyfind(list)");
	ft_checkfind(std::count(list2.begin(), list2.end(), ch), "std::count(list)");

	ch = 'A';
	ft_checkfind(easyfind<vector<char> >(vec2, ch), "easyfind(vector)");
	ft_checkfind(std::count(vec2.begin(), vec2.end(), ch), "std::count(vector)");
	ft_checkfind(easyfind<std::array<char, 4> >(arr2, v), "easyfind(array)");
	ft_checkfind(std::count(arr2.begin(), arr2.end(), ch), "std::count(array)");
	ft_checkfind(easyfind<std::deque<char> >(deq2, ch), "easyfind(deque)");
	ft_checkfind(std::count(deq2.begin(), deq2.end(), ch), "std::count(deque)");
	ft_checkfind(easyfind<std::forward_list<char> >(flist2, ch), "easyfind(forward_list)");
	ft_checkfind(std::count(flist2.begin(), flist2.end(), ch), "std::count(forward_list)");
	ft_checkfind(easyfind<std::list<char> >(list2, ch), "easyfind(list)");
	ft_checkfind(std::count(list2.begin(), list2.end(), ch), "std::count(list)");
}
