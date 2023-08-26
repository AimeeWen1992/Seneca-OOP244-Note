// A program with virtual destructor
#include<iostream>
 
using namespace std;
 
class base {
  public:
    base()     
    { cout<<"Constructing base \n"; }
    virtual ~base()
    //~base()
    { cout<<"Destructing base \n"; }     
};
 
class derived: public base {
  public:
    derived()     
    { cout<<"Constructing derived \n"; }
    ~derived()
    { cout<<"Destructing derived \n"; }
};
 
int main(void)
{
  derived *d = new derived();  // CB, CD
  base *b = d; //
  delete b; //  DD, DB
  return 0;
}
