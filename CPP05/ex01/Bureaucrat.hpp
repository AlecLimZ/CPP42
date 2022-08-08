/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:21:56 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/08 11:22:07 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define DEF	"\033[0m"
# define RED	"\033[31m"
# define YEL	"\033[33m"
# define CYAN	"\033[36m"

# include <iostream>

using std::cout;
using std::endl;

class	Bureaucrat
{
	std::string const 	_name;
	int					_grade;
	public:
		Bureaucrat(std::string const n, int const g);

		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat & operator=(Bureaucrat const & rhs);

		// Error handling class
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
		int	error_handling(void);

		// Accessors (getter & setters)
		std::string	getName(void) const;
		int			getGrade(void) const;

		void	setGrade(int g);

		//incrementing & decrementing
		Bureaucrat & operator++(int);
		Bureaucrat & operator++(void);
		Bureaucrat & operator--(int);
		Bureaucrat & operator--(void);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
