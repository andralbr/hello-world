#include "base.h"

sim::BaseSignal::BaseSignal(std::string& name)
    : _name( name )
{

}


std::string sim::BaseSignal::getName()
{
    return _name;
}


sim::BaseBand::BaseBand( int index)
    : _bandIndex( index)
{

}

int sim::BaseBand::getIndex() const
{
    return _bandIndex;
}