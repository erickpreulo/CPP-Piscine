/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:37:27 by egomes            #+#    #+#             */
/*   Updated: 2022/04/15 20:36:26 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#define HIGHG 1
#define LOWG 150
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
		~Form();

		const std::string getName() const ;
		int getGradeSign() const ;
		int getGradeExecute () const ;
		bool	getSigned() const ;

		void	beSigned(Bureaucrat & b);
		void	signForm();
	
		class GradeTooLowException : public std::exception {
			const char* what() const throw () ;
		};

		class GradeTooHighException : public std::exception {
			const char* what() const throw () ;
		};
};

std::ostream & operator<< (std::ostream & o, Form const & form);
#endif
