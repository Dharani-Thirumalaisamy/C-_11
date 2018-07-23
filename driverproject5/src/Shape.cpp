/*
 * Shape.cpp
 *
 *  Created on: Oct 23, 2017
 *      Author: Dell-pc
 */

#include "Shape.h"
#include<iostream>
#include"Rectangle.h"
#include"Triangle.h"

namespace edu {
namespace neu {
namespace csye6205 {

Shape::Shape(int length ,int width):length(length),width(width){

}
void Shape::demo(){
	std::cout<<"The area of the rectangle is"<<length*width<<std::endl;
	std::cout<<"The area of the triangle is"<<0.5*length*width<<std::endl;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
