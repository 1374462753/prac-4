#include "TruckLoads.h"

int TruckLoads::numTrucks(int numCrates, int loadSize) {
    if (numCrates > loadSize) {
        int a = numCrates / 2;
        int b = numCrates - a;
        int cars = 0;
        cars += TruckLoads::numTrucks(a, loadSize);
        cars += TruckLoads::numTrucks(b, loadSize);
        return cars;
    } else {
        return 1;
    }
}
