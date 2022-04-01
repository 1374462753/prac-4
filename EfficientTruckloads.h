#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <string>

using namespace std;


class EfficientTruckloads  {
public:
    EfficientTruckloads();

    void initialize();

    int numTrucks(int numCrates, int loadSize) ;

private:
    bool valid[10001];
    int result[10001];
    int prevLoadSize = 0;
};


#endif //EFFICIENTTRUCKLOADS_H
