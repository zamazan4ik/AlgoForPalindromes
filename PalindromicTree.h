#ifndef PALINDROMICTREE_H
#define PALINDROMICTREE_H

#include "Palindrome.h"
#include "NodePalindromicTree.h"
#include <string>
#include <vector>

namespace algo
{

class PalindromicTree : public algo::FindPalindrome
{
private:
    std::vector<Node*> pullWorkNodes;
    Node* root1,*root2, *suff;


    void addLetter(int pos);
    void initTree();
    void findAddSuffix(Node* &cur, int pos, int& curlen);
    void makeSuffixLink(Node* &cur, int pos, int& curlen, int let);

public:
    PalindromicTree(const std::string& s);
    ~PalindromicTree();
    long long operator()();
};

}

#endif // PALINDROMICTREE_H
