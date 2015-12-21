#include "PalindromicTree.h"
#include "NodePalindromicTree.h"

using namespace algo;


PalindromicTree::PalindromicTree(const std::string& s) : FindPalindrome(s)
{
    initTree();
}

PalindromicTree::~PalindromicTree()
{
    for(int i = 0;i < pullWorkNodes.size(); ++i)
    {
        delete pullWorkNodes[i];
    }
}

void PalindromicTree::initTree()
{
    root1 = new Node;
    root1->len = -1;
    root1->sufflink = root1;
    root2 = new Node;
    root2->len = 0;
    root2->sufflink = root1;
    suff = root2;
    pullWorkNodes.push_back(root1);
    pullWorkNodes.push_back(root2);
}

void PalindromicTree::findAddSuffix(Node* &cur, int pos, int& curlen)
{
    while (true)
    {
        curlen = cur->len;
        if (pos - 1 - curlen >= 0 && str[pos - 1 - curlen] == str[pos])
        {
            break;
        }
        cur = cur->sufflink;
    }
}

void PalindromicTree::makeSuffixLink(Node* &cur, int pos, int& curlen,int let)
{
    while (true)
    {
        cur = cur->sufflink;
        curlen = cur->len;
        if (pos - 1 - curlen >= 0 && str[pos - 1 - curlen] == str[pos])
        {
            suff->sufflink = cur->next[let];
            break;
        }
    }
}

void PalindromicTree::addLetter(int pos)
{
    Node* cur = suff;
    int let = str[pos] - 'a', curlen = 0;
    findAddSuffix(cur, pos, curlen);
    if (cur->next[let] != nullptr)
    {
        suff = cur->next[let];
        return;
    }
    suff = new Node;
    pullWorkNodes.push_back(suff);
    suff->len = cur->len + 2;
    cur->next[let] = suff;
    if (suff->len == 1)
    {
        suff->sufflink = root2;
        suff->num = 1;
        return;
    }
    makeSuffixLink(cur, pos, curlen, let);
    suff->num = 1 + suff->sufflink->num;
}

long long PalindromicTree::operator ()()
{
    for (int i = 0; i < str.length(); ++i)
    {
        addLetter(i);
        cntPalindromes += suff->num - 1;
    }
    return cntPalindromes;
}

