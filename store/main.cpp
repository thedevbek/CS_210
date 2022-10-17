/**
 * @Author: Your name
 * @Date:   2022-09-25 21:41:52
 * @Last Modified by:   Your name
 * @Last Modified time: 2022-09-25 22:45:32
 */
#include <iostream>
using namespace std;
#include <string>

#ifndef _CONTACT

#include "ContactNode.h"

#endif
int main(int argc, char **argv)

{
    ContactList contactList;

    string contactNameStr;

    string contactPhoneNum;

    int N = 0;

    for (int i = 0; i < N; i++)

    {
        cout << "Person" << (i + 1) << endl;
        cout << "Enter name: " << endl;
        cout << "Enter phone number: " << endl;
        cout << "You entered: ", cin >> contactNameStr;
        cin >> contactPhoneNum, cout << "-", cin >> contactPhoneNum, cout << "-", cin >> contactPhoneNum << endl;
    }
    cout << "Contact List" << endl;

    contactList.MoveFirst();

    for (int i = 0; i < N; i++)

    {

        ContactNode curContact = contactList.Get();

        curContact.PrintContactNode();

        contactList.MoveNext();
    }

    return 0;
}
