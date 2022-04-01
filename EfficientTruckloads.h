#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <string>
#include <map>

using namespace std;

class EfficientTruckloads  {
public:
    EfficientTruckloads();

    void initialize();

    int numTrucks(int numCrates, int loadSize) ;

private:
    map<int, int> mem;
    int prevLoadSize = 0;
};


#endif //EFFICIENTTRUCKLOADS_H
