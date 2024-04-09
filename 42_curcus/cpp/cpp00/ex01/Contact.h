#ifndef _CONTACT_H_
#define _CONTACT_H_

#include "iostream"

using std::cout;
using std::endl;
using std::string;

class Contact {
public:
    Contact();
    string getFirstname();
    string getLastName();
    string getNickName();
    string getPhoneNumber();
    string getDarkestSecret();
    bool getIsEmpty();
    void setIsEmpty(bool isEmpty);
    void setFirstname(string firstName);
    void setLastName(string lastName);
    void setNickName(string nickName);
    void setPhoneNumber(string phoneNumber);
    void setDarkestSecret(string darkestSecret);

private:
    string _firstName;
    string _lastName;
    string _nickName;
    string _phoneNumber;
    string _darkestSecret;
    bool _isEmpty;
};

#endif
