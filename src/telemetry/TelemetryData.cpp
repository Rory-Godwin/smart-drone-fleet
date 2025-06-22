#include "TelemetryData.h"
#include <sstream>

// Converts telemetry data into a readable string format
std::string TelemetryData::toString() const {
    std::ostringstream oss;
    oss << "GPS: (" << latitude << ", " << longitude << ")"
        << ", Altitude: " << altitude << "m"
        << ", Battery: " << batteryLevel << "%";
    return oss.str();
}
