#include "RedBlackTree.h"
#include "RedBlackTree.cpp"

int main() {
    RedBlackTree<int> tree;
    tree.add(10);
    tree.add(11);
    tree.add(12);
    tree.add(8);

    tree.remove(11);
    tree.add(13);
    tree.add(11);
    tree.add(9);
    tree.add(5);
    tree.print(tree.root, 0);
    return 0;
}
