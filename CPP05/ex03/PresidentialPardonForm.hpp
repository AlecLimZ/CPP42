/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:16:11 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/10 16:07:20 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	string	_target;
	public:
	//canonical form
	PresidentialPardonForm(void);
	~PresidentialPardonForm(void);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
	PresidentialPardonForm(string target);

	//setter
	void	setTarget(string t);

	//getter
	string	getTarget(void) const;

	//zaphod
	void	informZap(void) const;

	//inherit execute
	virtual void	execute(Bureaucrat const & executor) const;
};

#endif
