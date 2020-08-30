/*
created by:Guanhua Wang, student2
ID:a1709743,   student2_Id(for undergraduate)
time:06.08.2020
Contact Email:
Include int main(int argc,char *argv[])
input: argv[1]
output: Screen

input sample:
ID arrival_time priority age total_tickets_required
for example: s1 3 1 0 50

output sample:
ID, arrival and termination times, ready time and durations of running and waiting
*/

#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <fstream>
#include <numeric>
#include <iomanip>
#include <bitset>
#include <list>
#include <stdexcept>
#include <functional>
#include <utility>
#include <ctime>

#include "linked.h"
using namespace std;

void output()
{
    string result;
    int i;
    cout << "name   arrival   end   ready   running   waiting" << endl;
    for (i = 0; i < result.size(); i++) // every result
    {
    }
    cout << endl;
}

int main(int argc, char *argv[])
{
    int i, j, k;
    freopen(argv[1], "r", stdin);

    node *n1 = new node(0, 0, 1, 0, 46);
    node *n2 = new node(1, 0, 1, 0, 20);
    node *n3 = new node(2, 0, 1, 0, 38);

    linked *q1 = new linked();

    q1->add(n1);
    q1->add(n2);
    q1->add(n3);

    linked *f = new linked();

    q1->print();
    for (int i = 0; i < 2000; i = i + 5)
    {
        if (q1->isEmpty() == false)
        {
            cout << i << " ";
            q1->process(f);
            //cout << "is false" << i << endl;
        }
        else
        {
            // cout << "is true" << i << endl;
            break;
        }
    }
    f->print();

    // initial();        // initial data
    // input();          // input data
    // works();          // process data
    // output();         // output result
    return 0;
}
