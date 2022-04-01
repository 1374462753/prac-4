#include "EfficientTruckloads.h"

EfficientTruckloads::EfficientTruckloads() : mem() {
    initialize();
}

void EfficientTruckloads::initialize() {
    mem.clear();
    prevLoadSize = 0;
}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    if (prevLoadSize != loadSize) {
        initialize();
        prevLoadSize = loadSize;
    }
    if (mem.find(numCrates) == mem.end()) {
        if (numCrates > loadSize) {
            int a = numCrates / 2;
            int b = numCrates - a;
            int cars = 0;
            cars += numTrucks(a, loadSize);
            cars += numTrucks(b, loadSize);
            mem[numCrates] = cars;
            return cars;
        } else {
            mem[numCrates] = 1;
            return 1;
        }
    } else {
        return mem[numCrates];
    }
}
