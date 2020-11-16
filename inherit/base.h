#pragma once

#include <vector>
#include <string>

namespace sim
{
  class BaseBand;

  class BaseSignal
  {
      public:
        BaseSignal(std::string& name);

        virtual std::string getName();
        
        virtual BaseBand& addBand( int index, int numberElements ) = 0;
        virtual BaseBand& getBand( int idx ) = 0;

      private:
      std::string _name;

  };


  class BaseBand
  {
      public:
        BaseBand( int index);
        int getIndex() const;
        virtual int getNumberElements() const = 0;
      private:
        int _bandIndex;
  };



}