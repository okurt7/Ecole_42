#include "Contact.h"

Contact::Contact() {
    _isEmpty = true;
}

string Contact::getFirstname() {
    return _firstName;
}

void Contact::setFirstname(std::string firstName) {
    _firstName = firstName;
}

string Contact::getLastName() {
    return _lastName;
}

void Contact::setLastName(std::string lastName) {
    _lastName = lastName;
}

string Contact::getNickName() {
    return _nickName;
}

void Contact::setNickName(std::string nickName) {
    _nickName = nickName;
}

string Contact::getPhoneNumber() {
    return _phoneNumber;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
    _phoneNumber = phoneNumber;
}

string Contact::getDarkestSecret() {
    return _darkestSecret;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
    _darkestSecret = darkestSecret;
}

bool Contact::getIsEmpty() {
    return _isEmpty;
}

void Contact::setIsEmpty(bool isEmpty) {
    _isEmpty = isEmpty;
}