#include "Vehicle.h"
#include "Raceable.h"

bool Vehicle::operator==(const Raceable &r) {

    //Cast Raceable to Vehicle
    const Vehicle *v = dynamic_cast<const Vehicle *>(&r);
    if (v == nullptr) return false;
    return ((v->getXpos() == this->getXpos()) && (v->getYpos() == this->getYpos()));

}