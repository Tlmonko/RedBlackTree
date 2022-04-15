#include "RedBlackTree.h"
#include "RedBlackTree.cpp"

int main() {
    RedBlackTree<int> tree;
    tree.add(23);
    tree.add(19);
    tree.add(24);
    tree.add(11);
    tree.add(21);
    tree.add(13);
    tree.remove(23);
    tree.print(tree.root, 0);
    return 0;
}
