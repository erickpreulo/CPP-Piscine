/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:37:27 by egomes            #+#    #+#             */
/*   Updated: 2022/04/26 15:10:01 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
		const std::string _name;
		const int _gradeSign;
		const int _gradeExecute;
		bool _signed;
	public:
		Form(const std::string &name = "unknow", const int &gradeSign = 10, const int &gradeExecute = 100);
		Form( const Form &obj );
		Form &	operator= ( const Form &obj );
		virtual ~Form();

		const std::string getName() const ;
		int getGradeSign() const ;
		int getGradeExecute () const ;
		bool	getSigned() const ;
		void	beSigned(Bureaucrat & b);
		void	signForm();

		void	execute(Bureaucrat const & executor) const;
		virtual void	executeAction() const = 0;
		
		class GradeTooLowException : public std::exception {
			const char* what() const throw () ;
		};

		class GradeTooHighException : public std::exception {
			const char* what() const throw () ;
		};

		class GradeTooLowToExecute : public std::exception {
			const char* what() const throw () ;
		};
		
		class GradeNotSigned : public std::exception {
			const char* what() const throw () ;
		};
};

std::ostream & operator<< (std::ostream & o, Form const & form);
#endif
