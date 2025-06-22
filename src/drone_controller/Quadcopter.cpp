#include "Quadcopter.h"
#include <iostream>

// Constructor: store drone ID on creation
Quadcopter::Quadcopter(const std::string& drone_id)
    : id(drone_id) {}

// Simulate takeoff by printing to console
void Quadcopter::takeOff() {
    std::cout << "[Quadcopter " << id << "] Taking off..." << std::endl;
}

// Simulate landing
void Quadcopter::land() {
    std::cout << "[Quadcopter " << id << "] Landing..." << std::endl;
}

// Simulate moving to a GPS location at specific altitude
void Quadcopter::moveTo(double latitude, double longitude, double altitude) {
    std::cout << "[Quadcopter " << id << "] Moving to ("
              << latitude << ", " << longitude << ", " << altitude << ")..." << std::endl;
}

// Return drone ID
std::string Quadcopter::getID() const {
    return id;
}
