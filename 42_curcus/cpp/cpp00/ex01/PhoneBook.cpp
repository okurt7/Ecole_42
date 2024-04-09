#include "PhoneBook.h"

PhoneBook::PhoneBook() : _index(0) {}

void PhoneBook::addContact(Contact contact) {
    if (contact.getFirstname().empty() || contact.getLastName().empty() || contact.getNickName().empty() ||
        contact.getPhoneNumber().empty() || contact.getDarkestSecret().empty())
        cout << "Missing information found, registration could not be completed" << endl;
    else {
        _contacts[_index % 8].setFirstname(contact.getFirstname());
        _contacts[_index % 8].setLastName(contact.getLastName());
        _contacts[_index % 8].setNickName(contact.getNickName());
        _contacts[_index % 8].setPhoneNumber(contact.getPhoneNumber());
        _contacts[_index % 8].setDarkestSecret(contact.getDarkestSecret());
        _contacts[_index % 8].setIsEmpty(false);
        cout << "Registration successful" << endl;
        _index++;
    }
}

void PhoneBook::formatString(std::string str) {
    if (str.length() >= 10)
        cout << str.substr(0, 9) + "." << "|";
    else
        cout << std::setw(10) << str << "|";
}

void PhoneBook::showContacts() {
    for (int i = 0; i < 8; ++i) {
        if (_contacts[i].getIsEmpty())
            break;
        cout << std::setw(10) << i + 1 << " | ";
        formatString(_contacts[i].getFirstname());
        formatString(_contacts[i].getLastName());
        formatString(_contacts[i].getNickName());
        cout << endl;
    }
}

void PhoneBook::showContactById(int index) {
    if (_contacts[index - 1].getIsEmpty())
        cout << "Wrong index value" << endl;
    else {
        cout << "Index :" << index << endl;
        cout << "First Name : " << _contacts[index - 1].getFirstname() << endl;
        cout << "Last Name : " << _contacts[index - 1].getLastName() << endl;
        cout << "Nick Name : " << _contacts[index - 1].getNickName() << endl;
        cout << "Phone : " << _contacts[index - 1].getPhoneNumber() << endl;
        cout << "Darkest Secret : " << _contacts[index - 1].getDarkestSecret() << endl;
    }
}
