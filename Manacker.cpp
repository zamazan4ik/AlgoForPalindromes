#include "Manacker.h"

using namespace algo;

Manacker::Manacker(const std::string& s) : FindPalindrome(s)
{
    ansPal2.resize(s.length());
    ansPalN2.resize(s.length());
}

long long Manacker::operator ()()
{
    Pal2();
    PalN2();
    for(size_t i = 0; i < str.length(); ++i)
    {
        cntPalindromes += ansPal2[i] + ansPalN2[i];
    }
    return cntPalindromes;
}


//Find palindroms like 2*N+1
void Manacker::PalN2()
{
    int leftBorder = 0, rightBorder = -1, tempMirror;//start digits for algortihm
    for(int i = 0; i < str.length(); ++i)
    {
        tempMirror = (i > rightBorder ? 0 : std::min(ansPalN2[leftBorder + rightBorder - i], rightBorder - i)) + 1;//find mirror of current index
        while(i + tempMirror < str.length() && i - tempMirror >= 0 && str[i - tempMirror] == str[i + tempMirror])//increase our index
        {
            ++tempMirror;
        }
        ansPalN2[i] = --tempMirror;
        if(i + tempMirror > rightBorder)//try to increase our right border of palindrom
        {
            leftBorder = i - tempMirror;
            rightBorder = i + tempMirror;
        }
    }
}



//Find palindroms like 2*N
//See PalN2.
//P.S. About magic numbers : you can read about this in the description of the algorithm of Manacker.
//These numbers need for finding palindroms like 2*N because not allowed to find centre of these palindrom
void Manacker::Pal2()
{
    int leftBorder = 0, rightBorder = -1, tempMirror;
    for(int i = 0; i < str.length(); ++i)
    {
        tempMirror = (i > rightBorder ? 0 : std::min(ansPal2[leftBorder + rightBorder - i + 1],rightBorder - i + 1)) + 1;
        while(i + tempMirror - 1 < str.length() && i - tempMirror >= 0 && str[i - tempMirror] == str[i + tempMirror - 1])
        {
            ++tempMirror;
        }
        ansPal2[i] = --tempMirror;
        if(i + tempMirror - 1 > rightBorder)
        {
            leftBorder = i - tempMirror;
            rightBorder = i + tempMirror - 1;
        }
    }

}

