/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:23:42 by leng-chu          #+#    #+#             */
/*   Updated: 2022/07/23 15:24:48 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_HPP
# define SAMPLE_HPP

class Sample
{
	public:
		Sample(int v);
		~Sample(void);

		int	getFoo(void) const;
		int	compare(Sample *other) const;
	private:
		int	_foo;
};

#endif
