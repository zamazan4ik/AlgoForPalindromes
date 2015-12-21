#ifndef SLOWN2_H
#define SLOWN2_H

#include "Palindrome.h"

namespace algo
{

class SlowN2 : FindPalindrome
{
private:
    void oddCount();
    void evenCount();
public:
    SlowN2(const std::string& s);
    long long operator()();
};

}
#endif // SLOWN2_H
