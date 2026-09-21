#include <iostream>
#include <string>

struct SatelliteGraph
{
    std::string Satellite;
    int time;
    double x;
    double y;
    double z;
    double altitude;
};

void SatellitesGraph(const SatelliteGraph& satellite);

int main()
{
    SatelliteGraph mySatellite;

    mySatellite.time = 1;
    mySatellite.Satellite = "NASA";
    mySatellite.x = 0.0;
    mySatellite.y = 0.0;
    mySatellite.z = 0.0;
    mySatellite.altitude = 1.5;

    std::cout << "Hello, from CppOrbitalEngine! This is Kris!\n";

    SatellitesGraph(mySatellite);

    return 0;
}

void SatellitesGraph(const SatelliteGraph& satellite)
{
    std::cout << "This would show the graph\n";
    std::cout << "Satellite: " << satellite.Satellite << "\n"; 
    std::cout << "Time: " << satellite.time << "\n";
    std::cout << "Altitude: " << satellite.altitude << "\n";
}