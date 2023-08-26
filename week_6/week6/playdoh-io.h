// playdoh-io.h
//

#ifndef PLAYDOH_H
#define PLAYDOH_H

#include <iostream>

class playdoh {
  char colour; //private
  int weight; //private
  
  public:
    playdoh(); // default const
    playdoh(char c, int w);

    void setColour(char c);
    void setWeight(int w);
    char getColour() const; // new queries
    int getWeight() const; // new queries

    // Updated display function
    void display(std::ostream&) const;

    // New read function
    void read(std::istream&);
};

std::ostream& operator<<(std::ostream&, const playdoh&);
std::istream& operator>>(std::istream&, const playdoh&);

#endif
