/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:42:46 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/10 16:07:41 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("PresidentialPardonForm", 25, 5), _target("DefaultTargetPardon")
{}

PresidentialPardonForm::~PresidentialPardonForm(void)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src): Form(src.getName(), src.getGsign(), src.getGexec()), _target("DefaultTargetPardon")
{}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	if (this != &rhs)
		this->_target = rhs.getTarget();
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(string target): Form("PresidentialPardonForm", 25, 5), _target(target)
{}

void	PresidentialPardonForm::setTarget(string t)
{
	this->_target = t;
}

string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void	PresidentialPardonForm::informZap(void) const
{
	cout << GRE << getTarget() << " has been pardoned by Zaphod Beeblebrox"
		<< DEF << endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!getSigned() && executor.getGrade() > 0 && executor.getGrade() <= getGexec())
		cout << YEL << "[PresidentialCreationForm]: this form is not yet signed by "
			<< DEF << endl;
	else if (getSigned() && executor.getGrade() > 0 && executor.getGrade() <= getGexec())
		this->informZap();
	else
		cout << RED << "[PresidentialCreationForm]: Sorry cannot execute, need at least " << getGexec() << DEF << endl;
}
