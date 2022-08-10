/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:24:55 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/10 16:43:48 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 72, 45), _target("TargetDefaultRobo")
{}

RobotomyRequestForm::~RobotomyRequestForm(void)
{}

RobotomyRequestForm::RobotomyRequestForm(string target): Form("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src): Form(src.getName(), src.getGsign(), src.getGexec()), _target(src.getTarget())
{}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	if (this != &rhs)
		this->_target = rhs.getTarget();
	return (*this);
}

void	RobotomyRequestForm::setTarget(string t)
{
	this->_target = t;
}

string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void RobotomyRequestForm::robot(void) const
{
	srand(time(0));
	if (rand() % 2)
		cout << GRE << this->getTarget() << " has been robotomized successfully 50% of the time\n"DEF << endl;
	else
		cout << RED << "OH NOOOO! " << this->getTarget() << " has failed been robotomized\n"DEF << endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!getSigned() && executor.getGrade() > 0 && executor.getGrade() <= getGexec())
		cout << YEL << "[RobotomyRequestForm]: this form is not yet signed by "
			<< DEF << endl;
	else if (getSigned() && executor.getGrade() > 0 && executor.getGrade() <= getGexec())
		this->robot();
	else
		cout << RED << "[RobotomyRequestForm]: Sorry cannot execute, need at least "
			<< getGexec() << DEF << endl;
}
