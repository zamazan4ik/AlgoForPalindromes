#include "TestGenerator.h"
#include <string>
#include <algorithm>

/* Generates the palindromes to stream out, count of palindromes is countAll,
 * length of MAX palindrome is maxLength
 */

void TestGenerator(std::ofstream& out, size_t countAll, long long maxLength)
{
    std::string Alphabet("qwertyuiopasdfghjklzxcvbnm");
    for(size_t i = 0; i < countAll; ++i)
    {
        std::string s;
        s.resize(1 + rand() % maxLength);
        std::random_shuffle(Alphabet.begin(), Alphabet.end());
        size_t sizeTAlphabet = 1 + rand() % ('z' - 'a');
        for(size_t j = 0; j < s.length(); ++j)
        {
            s[j] = Alphabet[rand() % sizeTAlphabet];
        }
        out << s << '\n';
    }
}

