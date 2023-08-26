// Playdoh.h
#define _CRT_SECURE_NO_WARNINGS
#ifndef playdoh
#define playdoh

#include "Compound.h"

class Playdoh : public Compound{

  char* colour; // Dynamic Resources
  void setCol(const char* src); // helper
  public:
    Playdoh(); // Default Constr
    Playdoh(const char* col, int w, const char* name); // 3 Arg Constr
    ~Playdoh(); // Destr

    Playdoh(const Playdoh&); // Copy Constr
    Playdoh& operator=(const Playdoh&); // Copy Assign
    void display() const;
};
#endif
