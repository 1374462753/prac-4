#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <string>
#include "Truckloads.h"

using namespace std;


class EfficientTruckLoads : public Truckloads {
public:
    EfficientTruckLoads();

    void initialize();

    int numTrucks(int numCrates, int loadSize) override;

private:
    bool valid[10001];
    int result[10001];
    int prevLoadSize = 0;
};


#endif //EFFICIENTTRUCKLOADS_H
