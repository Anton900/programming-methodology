#ifndef CYLINDER_H
#define CYLINDER_H

#include "circle.h"

class cylinder : public circle
{
public:
    cylinder(std::string color, double radius, double height);
    double get_area() override;

protected:
    double height;
};

#endif