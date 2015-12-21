#ifndef HASH_H
#define HASH_H

#include "Palindrome.h"
#include <vector>

namespace algo
{

class Hash : public FindPalindrome
{
private:
    std::vector<long long> prefixHash, suffixHash, oddCount, evenCount;
    static std::vector<long long> simpleNumbers;
    const long long SimpleBase = 53;

    inline long long getHash(int indLeft, int indRight) const;
    inline long long getRevHash(int indLeft, int indRight) const;
    void PrepareSimpleNumbers();
    void CountingPrefixHash();
    void CountingSuffixHash();
    inline bool isPalindrome(int indLeft, int indRight) const;
    void CountingEven();
    void CountingOdd();
public:
    Hash(const std::string& s);
    long long operator()();
};

}
#endif // HASH_H
