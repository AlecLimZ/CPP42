/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:48:44 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/08 17:12:30 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
	string const	_name;
	bool			_signed;
	int const		_gsign;
	int	const		_gexec;
	public:
		//Canonical Form
		Form(void);
		~Form(void);
		Form(Form const & src);
		Form & operator=(Form const & rhs);

		Form(string n, int a, int b);

		class GradeTooHighException: public std::exception
		{
			public:
				virtual char const *what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual char const *what() const throw();
		};

		//getter
		string	getName(void) const;
		bool	getSigned(void) const;
		int		getGsign(void) const;
		int		getGexec(void) const;

		void	beSigned(Bureaucrat const & bur);

		int		sign_handling(int g);
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif
