#ifndef ALGOPALINDROME
#define ALGOPALINDROME

#include <string>

namespace algo
{
    enum ChooseAlgo {t_PalindromicTree, t_Manacker, t_Hash, t_SlowN2, t_SlowN3};
    long long countPalindrome(const std::string& s, ChooseAlgo type = t_Manacker);
}

#endif // ALGOPALINDROME

