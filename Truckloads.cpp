#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates > loadSize) {
        int a = numCrates / 2;
        int b = numCrates - a;
        int cars = 0;
        cars += Truckloads::numTrucks(a, loadSize);
        cars += Truckloads::numTrucks(b, loadSize);
        return cars;
    } else {
        return 1;
    }
}
