#ifndef SLOWN3_H
#define SLOWN3_H

#include "Palindrome.h"

namespace algo
{

class SlowN3 : public FindPalindrome
{
private:
    bool isPalindrom(int leftBorder, int rightBorder);
public:
    SlowN3();
    SlowN3(const std::string& s);
    long long operator()();
};

}
#endif // SLOWN3_H
