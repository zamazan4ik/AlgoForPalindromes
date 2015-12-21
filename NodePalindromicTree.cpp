#include "NodePalindromicTree.h"

using namespace algo;

Node::Node() : len(0), num(0), sufflink(nullptr), next(sizeAlphabet, nullptr)
{
}

Node::Node(int tLen, Node *tSuff) : len(tLen), num(0), sufflink(tSuff), next(sizeAlphabet, nullptr)
{
}

Node::~Node()
{
}
