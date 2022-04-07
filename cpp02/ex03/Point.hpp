/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:26:50 by egomes            #+#    #+#             */
/*   Updated: 2022/04/04 21:41:53 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cmath>
# include "Fixed.hpp"

class Point {

private:
	Fixed _x;
	Fixed _y;
	
public:
	Point();
	Point(Fixed const x, Fixed const y);
	Point(float x, float y);
	~Point();
    Point (const Point &Point);
    Point & operator= (const Point &point);

	Fixed getX() const;
	Fixed getY() const;
};

Fixed sign (Point const p1, Point const p2, Point const p3);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
