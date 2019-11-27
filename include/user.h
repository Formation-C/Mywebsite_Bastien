#ifndef USER_H
#define USER_H

#include <iostream>

using namespace std;

class user
{
    public:
        user();
        virtual ~user();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        int Getemail() { return email; }
        void Setemail(int val) { email = val; }
        string Getname() { return name; }
        void Setname(string val) { name = val; }

        int id;
        int email;
        string name;

        virtual void virtual_dummy() = 0;

//        void getEvents(Event) = 0;
//        void subscribe(Event) = 0;
//        void issubscribed(Event) = 0;
//        void unsubscribe(Event) = 0;

    protected:

    private:
};

#endif // USER_H
