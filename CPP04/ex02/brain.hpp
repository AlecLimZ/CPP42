/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:51:18 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/02 11:45:24 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "color.hpp"

class Brain
{
	std::string ideas[100];
	public:
		Brain(void);
		~Brain(void);
		Brain(Brain const & src);
		Brain const & operator=(Brain const & rhs);

		void 	setIdeas(std::string i);
		void	printIdeas(void) const;
		std::string getIdea(void) const;
};

#endif
