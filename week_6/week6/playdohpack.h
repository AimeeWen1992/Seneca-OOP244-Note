// playdohpack.h
//
#include "playdoh.h"

const int max_name = 32;

class PlaydohPack{

  char name[max_name];
  playdoh* playdohs; // Our dynamic resource
  int playdohCount;

  public:
    PlaydohPack();
    PlaydohPack(const char* packName, const playdoh* ps, int pn);
    ~PlaydohPack();
    
    // Copy constr
    //PlaydohPack(const PlaydohPack& src) = delete;
    // Copy assignment operator
    //PlaydohPack& operator=(const PlaydohPack& src) = delete;

    void display() const;
    void changePackName(const char* n);
    void changeColour();
};
