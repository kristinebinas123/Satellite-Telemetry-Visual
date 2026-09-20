#include <iostream>
#include <string>

struct SatelliteGraph
{
    std::string Satellite;
    int time;
    double units;
};

int main()
{
    SatelliteGraph mySatellite;

    mySatellite.time = 1;
    mySatellite.units = 0.5;
    mySatellite.Satellite = "NASA";

    std::cout << "Hello, from CppOrbitalEngine! This is Kris! The start of the C++\n";
    std::cout << "Satellite: " << mySatellite.Satellite << "\n";
    std::cout << "Time: " << mySatellite.time << "\n";
    std::cout << "Units: " << mySatellite.units << "\n";

    return 0;
}