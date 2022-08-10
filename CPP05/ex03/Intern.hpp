/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:49:45 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/10 19:54:14 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		//Canonical Form
		Intern(void);
		~Intern(void);
		Intern(Intern const & src);
		Intern & operator=(Intern const & rhs);

		Form * makeForm(string name, string target);

		//form list function
		Form * makeShrub(string target);
		Form * makeRobo(string target);
		Form * makePres(string target);
};

#endif
