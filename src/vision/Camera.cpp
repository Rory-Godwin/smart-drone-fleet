#include "Camera.h"
#include <opencv2/opencv.hpp>
#include <iostream>

// Implements readData() from Sensor base class
// Captures a single image from webcam and displays it
void Camera::readData() {
    // Open the default camera (usually index 0)
    cv::VideoCapture cap(0);

    // Check if the camera was successfully opened
    if (!cap.isOpened()) {
        std::cerr << "Camera failed to open!" << std::endl;
        return;
    }

    // Frame container
    cv::Mat frame;
    cap >> frame;  // Capture a single frame

    // If the frame is empty, something went wrong
    if (frame.empty()) {
        std::cerr << "Captured empty frame!" << std::endl;
        return;
    }

    // Show the captured frame in a window
    cv::imshow("Drone Camera View", frame);
    cv::waitKey(1000);  // Wait 1 second before closing the window

    // Cleanup
    cap.release();
    cv::destroyAllWindows();
}
