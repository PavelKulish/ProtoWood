#include "Object.h"

//Base constructors and destructors, getters and setters
Object::Object() {

}

Object::Object(double t, double v, double i, double h): temperature(t), visibility(v), illumination(i), humidity(h) {

}

Object::~Object() {

}

Object::SetTemperature(double t) {
    this->temperature = t;
}

Object::SetVisibility(double v) {
    this->visibility = v;
}

Object::SetIllumination(double i) {
    this->illumination = i;
}

Object::SetHumidity(double h) {
    this->humidity = h;
}

Object::GetTemperature() {
    return this->temperature;
}

Object::GetVisibility() {
    return this->visibility;
}

Object::GetIllumination() {
    return this->illumination;
}

Object::GetHumidity() {
    return this->humidity;
}
