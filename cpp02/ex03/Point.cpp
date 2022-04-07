/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:26:50 by egomes            #+#    #+#             */
/*   Updated: 2022/04/04 21:42:48 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0) {
	return;
}

Point::~Point() {
	return;
}

Point::Point(const Point &point) {
	*this = point;
}

Point::Point(Fixed const x, Fixed const y): _x(x), _y(y) {
	return;
}

Point::Point(float x, float y): _x(Fixed(x)), _y(Fixed(y)) {
	return;
}

Point & Point::operator= (const Point &point) {
	if (this != &point) {
		_x = point.getX();
		_y = point.getY();
	}
	return (*this);
}

Fixed Point::getX() const {
	return (this->_x);
}

Fixed Point::getY() const {
	return (this->_y);
}
