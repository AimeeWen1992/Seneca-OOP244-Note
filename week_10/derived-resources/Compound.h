// Compound.h
#ifndef compound
#define compound

class Compound{

  int weight;
  char* name; // Dynamic Resources
  void setName(const char* src); // Private

  public:
    Compound(); // Default Constr
    Compound(int w, const char* n); // 2 Arg constr
    ~Compound(); // Destr

    Compound(const Compound&); // Copy Constr
    Compound& operator=(const Compound&); // Copy Assign

    void display() const;
};
#endif
