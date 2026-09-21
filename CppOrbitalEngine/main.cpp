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
    mySatellite2.altitude = 1.65; 

    mySatellite3.time = 2; 
    mySatellite3.Satellite = "European Space"; 
    mySatellite3.x = 1.1; 
    mySatellite3.y = 3.3; 
    mySatellite3.z = 6.4; 
    mySatellite3.altitude = 1.7; 



    // std means standard and comes from the C++ library namespace 

    std::cout << "Hello, from CppOrbitalEngine! This is Kris!\n";


    // vector is used to store multiple variables of the same data type (can be grown or shrank if needed)
    std::vector<SatelliteGraph> satellites = {mySatellite, mySatellite2, mySatellite3};

    SatellitesGraph(satellites); 

    return 0;
}

void SatellitesGraph(const std::vector<SatelliteGraph>& satellites)
{

    double totalAltitude = 0.0; 
    int counter = 0; 

    for (const SatelliteGraph& satellite : satellites)
    {
     counter ++; 
     totalAltitude += satellite.altitude; 
     
     
   
     

    std::cout <<  satellite.Satellite  << "  " << counter << " Graph Data\n";
    std::cout << "Satellite: " << satellite.Satellite << "\n"
          << "Time: " << satellite.time << "\n"
          << "Altitude: " << satellite.altitude << "\n"
          << "Position: " << satellite.x << ", " << satellite.y << ", " << satellite.z << "\n\n";
    } 

    if (!satellites.empty())

{
    double highestAltitude = satellites[0].altitude;
    double lowestAltitude = satellites[0].altitude;

    std::string highestAltitudeSatellite = satellites[0].Satellite;
    std::string lowestAltitudeSatellite = satellites[0].Satellite;


    // calculate average
    double averageAltitude = totalAltitude / satellites.size();

    for(const SatelliteGraph& satellite : satellites) 
    {
       
      
    
        if (highestAltitude < satellite.altitude) 
        {
            highestAltitude = satellite.altitude;
            highestAltitudeSatellite = satellite.Satellite; 

            

        }

        if (lowestAltitude > satellite.altitude)
        {
            lowestAltitude = satellite.altitude; 
            lowestAltitudeSatellite = satellite.Satellite; 
            
            
        }     

    }
   
    std::cout << "Average altitude: " << averageAltitude << "\n";    
    
    std::cout << "Highest Altitude Name:" << highestAltitudeSatellite << "\n";
    std::cout << "Highest Altitude: " << highestAltitude << "\n";

    std::cout << "Lowest Altitude Name:" << lowestAltitudeSatellite << "\n";
    std::cout << "Lowest Altitude: " << lowestAltitude << "\n";
    
}




}