#include <string>

class node
{
public:
    //input
    int id;
    int arrival_time;
    int priority;
    int age;
    int tickets;

    //process
    int quota;
    int processed_tickets;
    int runs;

    //output
    int ready;
    int end;
    int running_time;
    int waiting_time;

    node *next;

    node();
    node(int id, int at, int a, int t, int);

    void decrease_priority();
    void process();
    void wait();
};