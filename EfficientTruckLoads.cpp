#include "EfficientTruckLoads.h"

EfficientTruckLoads::EfficientTruckLoads() {
    initialize();
}

void EfficientTruckLoads::initialize() {
    for (int i = 0; i < 10001; ++i) {
        valid[i] = false;
        result[i] = 0;
        prevLoadSize = 0;
    }
}

int EfficientTruckLoads::numTrucks(int numCrates, int loadSize) {
    if (prevLoadSize != loadSize) {
        initialize();
        prevLoadSize = loadSize;
    }
    if (!valid[numCrates]) {
        valid[numCrates] = true;
        if (numCrates > loadSize) {
            int a = numCrates / 2;
            int b = numCrates - a;
            int cars = 0;
            cars += TruckLoads::numTrucks(a, loadSize);
            cars += TruckLoads::numTrucks(b, loadSize);
            result[numCrates] = cars;
            return cars;
        } else {
            result[numCrates] = 1;
            return 1;
        }
    } else {
        return result[numCrates];
    }
}
