#include <iostream>
#include "derived.h"

int main()
{

    sim::Signal mySignal( "testSignal");
    std::cout << "name = " << mySignal.getName() << "\n";

    sim::Band& band = mySignal.addBand(1, 5);
    std::cout << "band = " << band.getIndex() << ", " << band.getNumberElements()<< "\n";

    sim::BaseBand& baseBand = band;
    std::cout << baseBand.getNumberElements() << "\n"; 

    return 0;
}