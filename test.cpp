#include <iostream>
#include "node.h"

using namespace std;

int main(){

    node *n1 = new node();
    node *n2 = n1;
    n1 = NULL;
    cout << n2->id << endl;
    cout << n1->id << endl;

}