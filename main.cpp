#include <iostream>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"

using namespace std;

int main() {
    int num;
    string s;
    int numCrates;
    int loadSize;
    cin >> num;
    cin >> s;
    cin >> numCrates;
    cin >> loadSize;

    Reverse r;
    Truckloads truckLoads;
    EfficientTruckloads efficientTruckLoads;

    if (num >= 0) {
        cout << r.reverseDigit(num);
    } else {
        cout << "ERROR";
    }
    cout << " ";

    cout << r.reverseString(s);
    cout << " ";

    if (numCrates >= 0 && loadSize >= 0) {
        cout << truckLoads.numTrucks(numCrates, loadSize);
        cout << " ";
        cout << efficientTruckLoads.numTrucks(numCrates, loadSize);
    } else {
        cout << "ERROR";
        cout << " ";
        cout << "ERROR";
    }
    cout << endl;

    return 0;
}
