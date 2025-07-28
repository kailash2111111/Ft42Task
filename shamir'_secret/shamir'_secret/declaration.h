#pragma once
#include <vector>
#include <utility>

class declaration {
private:
    int threshold;
    int split;
    

public:
    declaration();
    declaration(int threshold, int split);

    int getThreshold() const;
    int getSplit() const;
  
  
};
