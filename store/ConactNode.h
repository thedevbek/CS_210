/**
 * @Author: Your name
 * @Date:   2022-09-25 21:44:54
 * @Last Modified by:   Your name
 * @Last Modified time: 2022-09-25 22:51:31
 */
using namespace std;

#ifndef _CONTACT

#define _CONTACT

#include <string>

typedef

    class ContactNode

{

private:
    string contactName;

    string contactPhoneNum;

    ContactNode *next;

public:
    ContactNode(string nameStr, string phoneNumStr)

    {

        contactName = nameStr;

        contactPhoneNum = phoneNumStr;

        next = NULL;
    }

    string GetPhoneNumber() { return (contactPhoneNum); }

    string GetName() { return (contactName); }

    ContactNode *GetNext() { return (next); }

    void InsertAfter(ContactNode *nodePtr) { next = nodePtr; }

    void PrintContactNode(string *strMsg = NULL);

    void *ContactNode::TContactNode;
};

#define CONTACT_NODE_SIZE (sizeof(ContactNode))

typedef

    class ContactList

{

private:
    TContactNode head;

    TContactNode tail;

    TContactNode cur;

    int count;

public:
    ContactList()

    {

        head = tail = NULL;

        count = 0;
    }

    int GetCount() { return (count); }

    void MoveFirst() { cur = head; }

    void MoveLast() { cur = tail; }

    void MoveNext()

    {

        if (cur == tail)

        {

            cur = head;
        }

        else

        {

            cur = cur->GetNext();
        }
    }

    ContactNode &Get()

    {

        return (*cur);
    }

    void InsertAddNew(string nameStr, string phoneNum);

    ~ContactList();

} * TContactList;

#define CONTACT_LIST_SIZE (sizeof(ContactList))

#endif