#ifndef COMMUNICATIONS_H
#define COMMUNICATIONS_H

using namespace std;

class Communications
{  // Concrete Subject
   private:
    int state;  // 0 = not communicating, 1 = communictaing with other starlinks
                // (lasers), 2 = communictaing with users on earth (radio waves)

   public:
    Communications() : state(0){};
    ~Communications(){};
    int getState() { return state; };
    void setState(int s) { state = s; };
};

#endif