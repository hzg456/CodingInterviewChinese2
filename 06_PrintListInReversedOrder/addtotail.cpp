#include <iostream>
using namespace std;

struct ListNode
{
    int value;
    ListNode* m_next;
};

void printListNode(ListNode* pHead)
{
    cout<<"printListNode begin"<<endl;
    if (pHead==nullptr)
        cout<<"nullptr"<<endl;
    else
    {
        ListNode* pnode=pHead;
        while (pnode!=nullptr)
        {        
            cout<<pnode->value<<endl;
            pnode=pnode->m_next;
        }               
    }
    cout<<"printListNode end"<<endl;
    return;
}

void AddToTail(ListNode* &pHead,int value)//ok
{
    ListNode* pNew=new ListNode();
    pNew->value=value;
    pNew->m_next=nullptr;

    if(pHead==nullptr)
    {
        pHead=pNew;
        cout<<pHead->value<<endl;
    }
    else
    {
        ListNode* pnode=pHead;
        while (pnode->m_next!=NULL)
        {
            pnode=pnode->m_next;
        }
        pnode->m_next=pNew;
        cout<<(pnode->m_next)->value<<endl;
        
    }
    //printListNode(pHead);
    cout<<"AddToTail end"<<endl;
};

void AddToTail222(ListNode** pHead,int value)//ok
{
    ListNode* pNew=new ListNode();
    pNew->value=value;
    pNew->m_next=nullptr;

    if(*pHead==nullptr)
    {
        *pHead=pNew;
        cout<<(*pHead)->value<<endl;
    }
    else
    {
        ListNode* pnode=*pHead;
        while (pnode->m_next!=NULL)
        {
            pnode=pnode->m_next;
        }
        pnode->m_next=pNew;
        cout<<(pnode->m_next)->value<<endl;

    }
    cout<<"AddToTail222"<<endl;
};

int main()
{
    ListNode* p=nullptr;
    AddToTail(p,5);
    cout<<p->value<<endl;
    cout<<"__________"<<endl;

    ListNode* p2=nullptr;
    AddToTail222(&p2,6);
    cout<<p2->value<<endl;
    cout<<"__________"<<endl;

    AddToTail(p,8);
    printListNode(p);
    cout<<"__________"<<endl;

    ListNode* p3;//有毒。。。
    cout<<"1111"<<endl;
    cout<<p3->value<<endl;

    p3->value=7;
    cout<<"1111"<<endl;
    p3->m_next=nullptr;
    cout<<p3->value<<endl;

    printListNode(p3);
    cout<<"__________"<<endl;
}

