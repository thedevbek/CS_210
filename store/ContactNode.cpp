/**
 * @Author: Your name
 * @Date:   2022-09-25 21:42:36
 * @Last Modified by:   Your name
 * @Last Modified time: 2022-09-25 22:46:36
 */
using namespace std;

#include <iostream>

#include <string>

#ifndef _CONTACT

#include "ContactNode.h"

#endif

void ContactNode::PrintContactNode(string *strMsg)

{

    if (strMsg != NULL)

    {

        cout << *strMsg << endl;
    }
}
void ContactList::InsertAddNew(string nameStr, string phoneNum)

{
    TContactNode newNode = new ContactNode(nameStr, phoneNum);
    if (count == 0)
    {
        head = tail = newNode;
    }
    else

    {
        tail->InsertAfter(newNode);
        tail = tail->GetNext();
    }
    count++;
}
ContactList::~ContactList()
{
    TContactNode tempNodePtr = head;
    for (int i = 0; i < count; i++)
    {
        head = head->GetNext();
        delete (tempNodePtr);
        tempNodePtr = head;
    }
}