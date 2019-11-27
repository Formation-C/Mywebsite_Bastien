#ifndef THREAD_H
#define THREAD_H

#include <iostream>
#include <vector>

class Thread
{
    public:
        Thread(std::string _title);
        virtual ~Thread();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        std::string Gettitle() { return title; }
        void Settitle(std::string val) { title = val; }
        int Getlocked() { return locked; }
        void Setlocked(int val) { locked = val; }

        int id;
        std::string title;
        int locked;

        static std::vector<Thread*> objects;

    protected:

    private:
};

#endif // THREAD_H
