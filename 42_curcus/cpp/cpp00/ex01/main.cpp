#include "iostream"
#include "PhoneBook.h"
#include "MessageAndColor.h"

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::getline;

string getInput(const string &value) {
    string promptValue;

    for (int i = 0; i < 3 && promptValue.empty(); i++) {
        if (i && promptValue.empty())
            cout << "Please fill in the field" << endl;
        cout << value;
        getline(cin, promptValue);
    }
    return promptValue;
}

Contact FillContact() {
    Contact contact;

    contact.setFirstname(getInput("First Name : "));
    contact.setLastName(getInput("Last Name : "));
    contact.setNickName(getInput("Nick Name : "));
    contact.setPhoneNumber(getInput("Phone Number : "));
    contact.setDarkestSecret(getInput("Darkest Secret : "));
    return contact;
}

int main(void) {

    MessageAndColor messageAndColor;
    PhoneBook phoneBook;
    string command;

    messageAndColor.guidelineMessage();
    while (true) {
        cout << messageAndColor.getMagentaColor() << "PhoneBook >_ " << messageAndColor.getResetColor();
        getline(cin, command);
        if (command == "ADD") {
            Contact contact = FillContact();
            phoneBook.addContact(contact);
        } else if (command == "SEARCH") {
            phoneBook.showContacts();
            cout << "Enter Index : ";
            getline(cin, command);
            if (command.length() == 1 && (command[0] >= '1' && command[0] <= '8'))
                phoneBook.showContactById(std::stoi(command));
            else
                cout << "Undefined variable input. Please use 1 - 8" << endl;
        } else if (command == "EXIT") {
            cout << "PhoneBook is closing" << endl;
            break;
        } else
            cout << messageAndColor.getRedColor() << "undefined command" << messageAndColor.getResetColor() << endl;
    }
}