#include <iostream>

class datalogger
{
    private:
    

    public:
    datalogger() = default;
    void printReport(); 
    void printSectorList();
    int containsSector(int); 
    int addData(int,int,int); 
    int removeSector(int);
};


