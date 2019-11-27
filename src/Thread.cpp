#include "Thread.h"

Thread::Thread(std::string _title)
{
    //ctor
    title = _title;
    Thread::objects.push_back(this);
}

Thread::~Thread()
{
    //dtor
}

std::vector<Thread*> Thread::objects;
