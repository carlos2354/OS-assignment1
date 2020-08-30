#include "node.h"

using namespace std;

node::node()
{
    id = 0;
    arrival_time = 0;
    age = 0;
    tickets = 0;
    priority= 0;

    quota = ((10 - priority) * 10) / 5;
    processed_tickets = 0;
    runs = 0;

    ready = 0;
    end = 0;
    running_time = 0;
    last_running_time = 0;
    waiting_time = 0;
}

node::node(int id, int at, int p, int a, int t)
{
    this->id = id;
    arrival_time = at;
    age = a;
    tickets = t;
    priority= p;

    quota = ((10 - priority) * 10) / 5;
    processed_tickets = 0;
    runs = 0;

    ready = 0;
    end = 0;
    running_time = 0;
    last_running_time = 0;
    waiting_time = 0;
}