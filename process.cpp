#include <iostream>
#include <fstream>
#include "datalogger.h"

using namespace std;

void createReport(datalogger& dl,const char* label)
{
    dl.printReport();
}

void listBadSectors(datalogger& dl)
{
    cout << "----------------------------------------------------------------------" << endl;
    cout << "Bad sectors" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    dl.printSectorList();
                    
}

int main(int argc, char** argv) 
{

    datalogger data;
    datalogger badSectorData; // a list of items with bad sectors

    if (argc != 2) 
    {
        cout << "Usage: " << argv[0] << " <datafile>" << endl;
    }
    //Read the data
    char* datafile = argv[1];
    ifstream inDatafile(datafile);
    int sector;
    int exposure;
    int speed;

    while(!inDatafile.efo())
    {
        inDatafile >> sector;
        inDataFile >> exposure;
        inDataFile >> speed;

        if(!inDafile.eof())
        {
            data.addData(sector,exposure,speed);
            if(((exposure < 0 || (speed < 0) && !badSectorData.containsSector(sector))
            {
                badSectorData.addData(sector,exposure,speed);
            }

            if(bacSectorData.constainsSector(sector))
            {
                data.removeSector(sector);
            }
        }
    return(0);
}
    
