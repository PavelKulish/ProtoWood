#ifndef GROUND_HPP
#define GROUND_HPP
#include "Object.h"
#include "Soil.h"

class Ground: public Soil {
protected:
    double fertility;
public:
    Ground();
    ~Ground();

    void SetFertility(double f);
    double GetFertility();
};

#endif // GROUND_HPP_INCLUDED
