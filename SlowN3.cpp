#include "SlowN3.h"

using namespace algo;

SlowN3::SlowN3(const std::string& s) : FindPalindrome(s)
{
}

bool SlowN3::isPalindrom(int leftBorder, int rightBorder)
{
    while(leftBorder <= rightBorder)
    {
        if(str[leftBorder] != str[rightBorder])
        {
            return false;
        }
        ++leftBorder;
        --rightBorder;
    }
    return true;
}

long long SlowN3::operator ()()
{
    for(int leftBorder = 0;leftBorder < str.length(); ++leftBorder)
    {
        for(int rightBorder = leftBorder + 1; rightBorder < str.length(); ++rightBorder)
        {
            if( isPalindrom(leftBorder, rightBorder) )
            {
                ++cntPalindromes;
            }
        }
    }
    return cntPalindromes;
}


