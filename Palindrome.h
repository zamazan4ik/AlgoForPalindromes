#ifndef PALINDROME
#define PALINDROME

#include <string>

namespace algo 
{
    class FindPalindrome
    {
    protected:
        long long cntPalindromes = 0;
        std::string str;
        FindPalindrome(const std::string& s);
        virtual ~FindPalindrome() = 0;
    public:
        std::string getStr() const;
        void setStr(const std::string& s);
    }; 
}

#endif // PALINDROME

