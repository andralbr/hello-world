#include "derived.h"

sim::Band& sim::Signal::addBand( int index, int numberElements )
{
    _bands.push_back( Band( index, numberElements) );
    return (_bands[_bands.size() -1]);
}

sim::Band& sim::Signal::getBand( int index )
{
    return (_bands[index]);
}




sim::Band::Band( int index, int numberElements)
    : BaseBand(index), _numberElements( numberElements )
{

}