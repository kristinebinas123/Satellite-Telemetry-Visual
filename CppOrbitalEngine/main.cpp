#include <iostream>
#include <string>
#include <vector> 

struct SatelliteGraph
{
    std::string Satellite;
    int time;
    double x;
    double y;
    double z;
    double altitude;
};



void SatellitesGraph(const std::vector<SatelliteGraph>& satellites);

int main()
{
    SatelliteGraph mySatellite;
    SatelliteGraph mySatellite2; 
    SatelliteGraph mySatellite3; 

    mySatellite.time = 1;
    mySatellite.Satellite = "NASA";
    mySatellite.x = 0.0;
    mySatellite.y = 0.0;
    mySatellite.z = 0.0;
    mySatellite.altitude = 1.5;

    mySatellite2.time = 3; 
    mySatellite2.Satellite = "SPACEX"; 
    mySatellite2.x = 1.0; 
    mySatellite2.y = 2.3; 
    mySatellite2.z = 3.2; 
    mySatellite2.altitude = 1.3; 

    mySatellite3.time = 2; 
    mySatellite3.Satellite = "European Space"; 
    mySatellite3.x = 1.1; 
    mySatellite3.y = 3.3; 
    mySatellite3.z = 6.4; 
    mySatellite3.altitude = 1.2; 



    // std means standard and comes from the C++ library namespace 

    std::cout << "Hello, from CppOrbitalEngine! This is Kris!\n";


    // vector is used to store multiple variables of the same data type (can be grown or shrank if needed)
    std::vector<SatelliteGraph> satellites = {mySatellite, mySatellite2, mySatellite3};

    SatellitesGraph(satellites); 

    return 0;
}

void SatellitesGraph(const std::vector<SatelliteGraph>& satellites)
{

    for (const SatelliteGraph& satellite : satellites)
    {
    std::cout << "This would show the graph\n";
   /* std::cout << "Satellite: " << satellite.Satellite << "\n"; 
    std::cout << "Time: " << satellite.time << "\n";
    std::cout << "Altitude: " << satellite.altitude << "\n"; */ 
    std::cout << "Satellite: " << satellite.Satellite << " Time: " << satellite.time << " Altitude " << satellite.altitude << " Position: " << satellite.x << ", " << satellite.y << ", " << satellite.z << "\n"; 
    } 

}