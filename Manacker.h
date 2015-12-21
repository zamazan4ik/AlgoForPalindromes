#ifndef MANACKER_H
#define MANACKER_H

#include "Palindrome.h"
#include <vector>

namespace algo 
{

class Manacker : public FindPalindrome
{
private:
    std::vector<int> ansPalN2,ansPal2;
    void PalN2();
    void Pal2();
public:
    Manacker(const std::string& s);
    long long operator() ();
};

}
#endif // MANACKER_H

