/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:00:47 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/10 16:39:02 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <time.h> // need this for time()

class RobotomyRequestForm: public Form
{
	string	_target;
	public:
	//canonical form
	RobotomyRequestForm(void);
	~RobotomyRequestForm(void);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

	RobotomyRequestForm(string target);

	//setter
	void	setTarget(string t);

	//getter
	string	getTarget(void) const;

	//robotomized
	void	robot(void) const;

	//inherit execute
	virtual void	execute(Bureaucrat const & executor) const;
};

#endif
