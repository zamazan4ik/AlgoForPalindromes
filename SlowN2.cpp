#include "SlowN2.h"

using namespace algo;

SlowN2::SlowN2(const std::string& s) : FindPalindrome(s)
{
}

void SlowN2::oddCount()
{
    for(int indMiddle = 0; indMiddle < str.length(); ++indMiddle)
    {
        int leftBorder = indMiddle - 1, rightBorder = indMiddle + 1;
        while(leftBorder >= 0 && rightBorder < str.length() && str[leftBorder] == str[rightBorder])
        {
            ++cntPalindromes;
            --leftBorder;
            ++rightBorder;
        }
    }
}

void SlowN2::evenCount()
{
    for(int indMiddle = 0; indMiddle < str.length(); ++indMiddle)
    {
        int leftBorder = indMiddle, rightBorder = indMiddle + 1;
        while(leftBorder >= 0 && rightBorder < str.length() && str[leftBorder] == str[rightBorder])
        {
            ++cntPalindromes;
            --leftBorder;
            ++rightBorder;
        }
    }
}


long long SlowN2::operator ()()
{
    evenCount();
    oddCount();
    return cntPalindromes;
}

