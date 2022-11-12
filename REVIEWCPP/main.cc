/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cc                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:57:13 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/12 16:00:31 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "def.h"
#include <vector>
#include <iomanip>
#include <fstream>

using std::vector;
using std::setw;
using std::ofstream;

int	main(void)
{
	ofstream	file_out;
	file_out.open("fio_example.out");
	file_out << 24 << "\n";
	file_out.close();
}
