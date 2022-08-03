/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:12:14 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/03 16:25:44 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

# include <character.hpp>

class AMateria
{
	int	_id;
	protected:
		std::string	t;
		static int	id;
		int			isuse;
		std::string	owner;
	public:
		AMateria(std::string const & type);

		// canonical form
		AMateria(void);
		virtual ~AMateria(void);
		AMateria(AMateria const & src);
		AMateria & operator=(AMateria const & rhs);

		//getter
		std::string const & getType() const;
		int		getId(void) const;
		int		getIsUse(void) const;
		std::string const & getOwner(void) const;

		//setter
		void	setId(int const i);
		void	setIsUse(int const i);
		void	setOwner(std::string n);

		virtual AMateria * clone() const = 0;
		virtual void use(ICharacter & target);
};

class Ice: public AMateria
{
	int	_id;
	public:
		// canonical form
		Ice(void);
		~Ice(void);
		Ice(Ice const & src);
		Ice & operator=(Ice const & rhs);
		
		virtual AMateria * clone() const;
		virtual void use(ICharacter & target);

		//getter & setter
		int	getId(void) const;
		void	setId(int const i);
};

class Cure: public AMateria
{
	int _id;
	public:
		// canonical form
		Cure(void);
		~Cure(void);
		Cure(Cure const & src);
		Cure & operator=(Cure const & rhs);
		
		virtual AMateria * clone() const;
		virtual void use(ICharacter & target);
		
		//getter & setter
		int	getId(void) const;
		void	setId(int const i);
};

#endif
