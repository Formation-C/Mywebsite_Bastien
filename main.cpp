#include <iostream>
#include "Thread.h"

using namespace std;

//test

void displayThread(Thread* thread)
{
    cout << thread->Gettitle() << endl;
}

int main()
{

    cout << "Hello world!" << endl;
    new Thread("Les Rois de France par Stephane Bern");

    displayThread(Thread::objects[0]);

    return 0;
}
