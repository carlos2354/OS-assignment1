#include "node.h"
#include <string>

class linked{
    node *head;
    node *tracker;
    node *tail;

public:
    linked();

    void process(linked *finished);
    void add(node *n);
    bool isEmpty();
    void print();

    void to_finished();
    void to_linked_two();
    void to_linked_one();
};