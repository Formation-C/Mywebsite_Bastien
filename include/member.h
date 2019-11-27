#ifndef MEMBER_H
#define MEMBER_H

#include <user.h>


class member : public user
{
    public:
        member();
        virtual ~member();

        int Getrole() { return role; }
        void Setrole(int val) { role = val; }
        int Getavatar() { return avatar; }
        void Setavatar(int val) { avatar = val; }
        int Getpassword() { return password; }
        void Setpassword(int val) { password = val; }

        int role;
        int avatar;

//        sendpost(post);
//        getpost(post);
//        haspost(post);
//        _remove(post);
//        removeThread(thread);
//        setMemberRole(Member);

    protected:

    private:
        int password;
};

#endif // MEMBER_H
