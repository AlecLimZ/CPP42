/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   materiasource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:00:42 by leng-chu          #+#    #+#             */
/*   Updated: 2022/08/03 18:52:50 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "color.hpp"

using std::cout;
using std::endl;

class AMateria;

class	IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria * createMateria(std::string const & type) = 0;
};

class	MateriaSource: public IMateriaSource
{
	protected:
		AMateria *store[5];
	public:
		//Canonical Form
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		MateriaSource & operator=(MateriaSource const & rhs);

		virtual void learnMateria(AMateria* m);
		virtual AMateria * createMateria(std::string const & type);
};

#endif
