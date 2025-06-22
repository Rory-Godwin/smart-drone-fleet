#include "Quadcopter.h"
#include "Camera.h"
#include <iostream>

int main() {
    // Create a Quadcopter instance with ID "A1"
    Quadcopter drone("A1");

    // Create a Camera sensor instance
    Camera cam;

    // Simulate takeoff
    drone.takeOff();

    // Simulate moving to a specific GPS coordinate
    drone.moveTo(37.7749, -122.4194, 50.0);  // Example: San Francisco coordinates

    // Simulate capturing image using camera
    cam.readData();

    // Simulate landing
    drone.land();

    return 0;
}
