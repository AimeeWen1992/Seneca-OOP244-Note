// playdoh.h

class playdoh {
  char colour; //private
  int weight; //private
  
  public:
    playdoh(); // default const
    ~playdoh(); // destructor
    playdoh(char c, int w);

    void setColour(char c);
    void setWeight(int w);
    char getColour() const; // new queries
    int getWeight() const; // new queries
    void display() const;

    // Operator overloads
    playdoh& operator+=(int w); // this one
    playdoh& operator++(); // prefix
    playdoh operator++(int); // postfix

    operator bool() const; // conversion operator
    operator int() const; // conversion operator

    playdoh(int); // 1 arg constr, type conversion 
    friend bool samePlaydoh(const playdoh&, const playdoh&); <-***NEW*** is not  member function, is gobal function, is exataly line 34

    //bool operator==(const playdoh& other);   <-***NEW*** the same as Line 34, but internal can see the current obj as left side

};

//bool samePlaydoh(const playdoh&, const playdoh&);
bool operator==(const playdoh&, const playdoh&);
