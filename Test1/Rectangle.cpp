#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int x = 0, int y = 0, int h = 0, int w = 0) :
	xLow(x), yLow(y), height(h), width(w) {}

bool Rectangle::operator==(const Rectangle& s) {
	if (this == &s)
		return true;
	if ((xLow == s.xLow) && (yLow == s.yLow) && (height == s.height) && (width == s.width))
		return true;
	else
		return false;

}bool Rectangle::operator<(const Rectangle& s) {
	if (this->height * this->width < s.height * s.width) {
		this->xLow = s.xLow - 1;
		this->yLow = s.yLow - 1;
		this->height = s.height - 1;
		this->width = s.width - 1;
		return true;
	}
	else return false;
}

std::ostream& operator <<(std::ostream& os, Rectangle& r) {
	os << "Position is : " << r.xLow << " ";
	os << r.yLow << std::endl;
	os << "Height is : " << r.height << std::endl;
	os << "Width is : " << r.width << std::endl;
	return os;
}

int Rectangle::GetHeight() { return height; }
int Rectangle::GetWidth() { return width; }