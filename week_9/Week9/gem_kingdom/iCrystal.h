// iCrystal.h - Abstract Base Class
#ifndef _HELLO_HAPPY_CAT_
#define _HELLO_HAPPY_CAT_
//#ifndef _I_CRYSTAL_H_
//#define _I_CRYSTAL_H_

#include <iostream>

//#define NOVIRT

namespace gem_kingdom {

  class iCrystal {
    public:
      //~iCrystal() { std:: cout << "Destroying iCrystal" << std::endl; }
      virtual ~iCrystal() {};
#ifndef NOVIRT
      virtual void display(std::ostream& os) const = 0;
#else
      void display(std::ostream& os) const {
        os << "iCrystal display" << std::endl;
      }
#endif
      virtual void cut() = 0;
      virtual int getMass() const = 0;
      virtual int getPurity() const = 0;
  };

} // namespace

#endif
