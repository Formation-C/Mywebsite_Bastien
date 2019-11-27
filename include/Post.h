#ifndef POST_H
#define POST_H

#include <iostream>

using namespace std;

class Post
{
    public:
        Post();
        virtual ~Post();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        string GetauthorName() { return authorName; }
        void SetauthorName(string val) { authorName = val; }
        string Getcontent() { return content; }
        void Setcontent(string val) { content = val; }
        double Getdate() { return date; }
        void Setdate(double val) { date = val; }

        int id;
        string authorName;
        string content;
        double date;

    protected:

    private:
};

#endif // POST_H
