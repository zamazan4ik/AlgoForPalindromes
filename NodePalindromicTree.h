#ifndef NODEPALINDROMICTREE_H
#define NODEPALINDROMICTREE_H

#include <vector>

namespace algo
{

class Node
{
public:
    static const int sizeAlphabet = 26;

    std::vector<Node*> next;
    Node* sufflink;
    int len;
    int num;

    Node();
    Node(int tLen, Node* tSuff);
    ~Node();
};



}

#endif // NODEPALINDROMICTREE_H
