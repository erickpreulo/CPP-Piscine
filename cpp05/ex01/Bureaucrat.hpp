/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:23:34 by egomes            #+#    #+#             */
/*   Updated: 2022/04/15 17:31:07 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"
#define HIGHG 1
#define LOWG 150
class Form;

class Bureaucrat {
	private:
		const std::string _name;
		int	_grade;
	public:
		Bureaucrat(std::string name = "unknown", int grade = 10);
		~Bureaucrat();
		std::string	getName() const;
		int	getGrade() const;

		void	incrementGrade( int grade = 1 );
		void	decrementGrade( int grade = 1 );
		void	signForm(Form & f);
	
		class GradeTooHighException : public std::exception {
			public:
				const char*	what() const throw ();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char*	what() const throw ();
		};
};

std::ostream & operator<< (std::ostream & o, Bureaucrat const & bureaucrat);

#endif
