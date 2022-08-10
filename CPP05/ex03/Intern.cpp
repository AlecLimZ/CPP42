/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <leng-chu@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:55:08 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/10 18:53:00 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form * Intern::makeForm(string name, string target)
{
	Form *ptr[4];
	ptr[0] = new ShrubberyCreationForm(target);
	ptr[1] = new RobotomyRequestForm(target);
	ptr[2] = new PresidentialPardonForm(target);

	int i = !name.compare("shrubbery creation") ? 0 :
			!name.compare("robotomy request") ? 1 :
			!name.compare("presidential pardon") ? 2 : 3;

	i != 0 ? delete ptr[0]: delete ptr[i];
	i != 1 ? delete ptr[1]: delete ptr[i];
	i != 2 ? delete ptr[2]: delete ptr[i];
	i == 3 ? cout << RED << "[Error] The form name doesn't exist" << DEF << endl :
			cout << GRE << "Intern successfully create form" << DEF << endl;
	return (i != 3 ? ptr[i] : NULL);
}
