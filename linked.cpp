#include "linked.h"
#include <iostream>
using namespace std;

linked::linked()
{
    head = NULL;
    tracker = NULL;
    tail = NULL;
}

void linked::add(node *n)
{
    if (head == NULL)
    {
        head = n;
        tail = n;
    }
    else
    {
        tail->next = n;
        tail = tail->next;
        tail->next = NULL;
        cout << "added when finished" << endl;
    }
}

bool linked::isEmpty()
{
    if (head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void linked::process(linked *finished)
{
    if (head->processed_tickets < head->quota && head->tickets > 0)
    {
        head->processed_tickets++;
        head->tickets--;
        head->running_time += 5;
        cout << head->id << " " << head->processed_tickets << " " << head->tickets << " " << head->running_time << endl;
    }
    else
    {
        head->runs++;
        if (head->tickets == 0)
        {
            //to finished

            //new head of queue 1 is the next node
            if (head->next != NULL)
            {
                head = head->next;

                //add to finished queue
                if (finished->head == NULL)
                {
                    finished->head = head;
                    finished->tail = head;
                    finished->tail->next = NULL;
                    cout << "To finished not null -- finished null" << endl;
                }
                else
                {
                    finished->tail->next = head;
                    finished->tail = head;
                    finished->tail->next = NULL;
                    cout << "To finished not null -- finished not null" << endl;
                }
            }
            //new head of queue 1 is null
            else
            {
                if (finished->head == NULL)
                {
                    finished->head = head;
                    finished->tail = head;
                    cout << "To finished null -- finished null" << endl;
                }
                else
                {
                    finished->tail->next = head;
                    finished->tail = head;
                    finished->tail->next = NULL;
                    cout << "To finished null -- finished not null" << endl;
                }

                head = NULL;
            }
        }
        else if (head->runs % 2 == 0)
        {
            //to queue 2
        }
        else
        {
            //to subqueue
            if (head->next != NULL)
            {
                head->processed_tickets = 0;
                tail->next = head;
                tail = head;
                head = head->next;
                cout << "is to subqueue with non null head next" << endl;
            }
        }
    }
}

void linked::print()
{
    tracker = head;

    while (tracker != NULL)
    {
        cout << tracker->id << " " << tracker->arrival_time << " " << tracker->tickets << " " << tracker->running_time << " " << tracker->priority << " " << tracker->runs << endl;
        tracker = tracker->next;
    }
}