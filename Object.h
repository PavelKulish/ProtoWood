#ifndef OBJECT_H
#define OBJECT_H

class Object {
protected:
    double temperature;
    double visibility;
    double illumination;
    double humidity;
public:
    Object();
    Object(double t, double v, double i, double h);
    ~Object();

    void SetTemperature(double t);
    double GetTemperature();

    void SetVisibility(double v);
    double GetVisibility();

    void SetIllumination(double i);
    double GetIllumination();

    void SetHumidity(double h);
    double GetHumidity();
};



#endif // OBJECT_H_INCLUDED
