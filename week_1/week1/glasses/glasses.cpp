// glasses.cpp
// non-modular

struct glasses{

  int lens_type;
  int lens_width;
  int lens_length;

  int frame_type;
  int frame_width;
  int frame_length;

  // lens related functions
  int getLens_type(){
    return lens_type;
  }
  int getLens_width(){
    return lens_width;
  }
  int getLens_length(){
    return lens_length;
  }

  // frame related functions
  int getFrame_type(){
    return frame_type; 
  }
  int getFrame_width(){
    return frame_width;
  }
  int getFrame_length(){
    return frame_length; 
  }
};

