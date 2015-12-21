#include "Palindrome.h"

using namespace algo;

FindPalindrome::FindPalindrome(const std::string& s) : str(s)
{
}

FindPalindrome::~FindPalindrome()
{
}

std::string FindPalindrome::getStr() const
{
    return str;
}

void FindPalindrome::setStr(const std::string& s)
{
    str = s;
}
