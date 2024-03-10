#ifndef PLANTS_HPP
#define PLANTS_HPP
#include "Object.h"

class Plants: public Object {
protected:
    double FoliageDensity;
public:
    Plants();
    ~Plants();

    void SetFoliageDensity(double fd);
    double GetFoliageDensity();
};


#endif // PLANTS_HPP
