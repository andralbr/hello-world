#pragma once

#include "base.h"


namespace sim
{
    class Band : public BaseBand
    {
        public:
        friend class Signal;
        virtual int getNumberElements() const{ return _numberElements;};
        private:
            Band( int index, int numberElements);
            int _numberElements;
    };


    class Signal : public BaseSignal
    {
        public:
        Signal( std::string name): BaseSignal(name){ }
        virtual Band& addBand( int index, int numberElements );
        virtual Band& getBand( int idx );

        private:
            std::vector<Band> _bands;

    };



}