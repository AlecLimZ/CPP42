/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:21:56 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/09 19:00:03 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define DEF	"\033[0m"
# define RED	"\033[31m"
# define YEL	"\033[33m"
# define CYAN	"\033[36m"
# define GRE	"\033[32m"

# include <iostream>

using std::cout;
using std::endl;
using std::string;

class	Form;

class	Bureaucrat
{
	string const 	_name;
	int					_grade;
	public:
		Bureaucrat(string const n, int const g);

		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat & operator=(Bureaucrat const & rhs);

		// Exception handling class
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		int	exception_handling(void) const;

		// Accessors (getter & setters)
		string	getName(void) const;
		int			getGrade(void) const;

		void	setGrade(int g);

		//incrementing & decrementing
		Bureaucrat & operator++(int);
		Bureaucrat & operator++(void);
		Bureaucrat & operator--(int);
		Bureaucrat & operator--(void);

		void signForm(Form const & f);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
