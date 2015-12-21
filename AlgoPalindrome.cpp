#include "AlgoPalindrome.h"
#include "SlowN3.h"
#include "SlowN2.h"
#include "Hash.h"
#include "Manacker.h"
#include "PalindromicTree.h"


long long algo::countPalindrome(const std::string& s, algo::ChooseAlgo type)
{
    switch(type)
    {
        case t_SlowN3 :
        {
            auto t = SlowN3(s);
            return t();
        }
            break;
        case t_SlowN2 :
        {
            auto t = SlowN2(s);
            return t();
        }

            break;
        case t_Hash :
        {
            auto t = Hash(s);
            return t();
        }
            break;
        case t_Manacker :
        {
            auto t = Manacker(s);
            return t();
        }
            break;
        case t_PalindromicTree :
        {
            auto t = PalindromicTree(s);
            return t();
        }
            break;
        default:
            break;
            //TODO : Exception
    }
}
