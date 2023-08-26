// playdoh.h
//
#ifndef PLAYDOH_H
#define PLAYDOH_H

// Base class compound
class compound {

  int weight;

  public:
    compound(); // default const
    compound(int w);
    ~compound(); // destructor

    void setWeight(int w);
    int getWeight() const;
    void display() const;

  protected:
    void displayProt() const;
	
};

// Derived from compound is playdoh
class playdoh : public compound {
  char colour; 
  
  public:
    playdoh(); // default const
    playdoh(char c, int w);
    ~playdoh(); // destructor

    void setColour(char c);
    char getColour() const; // new queries
    void display() const;

};


#endif
