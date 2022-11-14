/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cc                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:57:13 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/14 12:18:06 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "def.h"

int	main(void)
{
	std::random_device	r;
	std::default_random_engine	generator{r()};

	std::uniform_real_distribution<float> distribution(0.,1.);

	cout << "first rand: " << distribution(generator) << "\n";
}
