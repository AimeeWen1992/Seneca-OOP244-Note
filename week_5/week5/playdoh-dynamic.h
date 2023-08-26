// playdoh-dynamic.h

class playdoh {
  char colour; //private
  int weight; //private
  char* type;
  
  public:
    playdoh(); // our constr
    ~playdoh(); // our destr
    playdoh(char c, int w, const char* t = "kid friendly"); // overloaded 3 arg constr
    void setColour(char c);
    void setWeight(int w);
    void setType(const char* t);
    char getColour() const;
    int getWeight() const;
    const char* getType() const;
    void display() const;

    playdoh& operator+=(int w);
    playdoh& operator++();
    playdoh operator++(int);
    operator bool() const;
    playdoh(int w);

    friend bool sameplaydoh(playdoh&, playdoh&); 
};
