#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////
// Structure for singly linear and singly circular linklist

template <class T>
struct nodeS
{
    T Data;
    struct nodeS * Next;
};

//////////////////////////////////////////////////////////////////////////
// Structure for Doubly linear and doubly Circular linklist

template <class T>
struct nodeD
{
    T Data;
    struct nodeD * Next;
    struct nodeD * Prev;
};

//////////////////////////////////////////////////////////////////////////
// Structure for Tree

template <class T>
struct nodeTR
{
    T Data;
    struct nodeTR *rchild;
    struct nodeTR *lchild;
};

//////////////////////////////////////////////////////////////////////////////////
// Class of Singly Linear Linklist
template <class T>
class SinglyLL
{
    public:
        struct nodeS<T> * First;

        SinglyLL();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();

        int Summation();
        int EvenCount();
        int OddCount();
        int FirstOccurence(T No);
        int LastOccurence(T No);
        int Frequency(T No);
        int Maximum();
        int Minimum();
        bool CheckPresent(T No);
};

//////////////////////////////////////////////////////////////////////////////////////
// class of singly Circular Linklist

template <class T>
class SinglyCL
{
    public:
        struct nodeS<T> * First;
        struct nodeS<T> * Last;

        SinglyCL();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();

        int Summation();
        int EvenCount();
        int OddCount();
        int FirstOccurence(T No);
        int LastOccurence(T No);
        int Frequency(T No);
        int Maximum();
        int Minimum();
        bool CheckPresent(T No);
};

//////////////////////////////////////////////////////////////////////////////////////////////
// class of Doubly Linear linklist

template <class T>
class DoublyLL
{
    public:
        struct nodeD<T> * First;

        DoublyLL();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();

        int Summation();
        int EvenCount();
        int OddCount();
        int FirstOccurence(T No);
        int LastOccurence(T No);
        int Frequency(T No);
        int Maximum();
        int Minimum();
        bool CheckPresent(T No);
};

//////////////////////////////////////////////////////////////////////////////////////////////
// class of Doubly Circular linklist

template <class T>
class DoublyCL
{
    public:
        struct nodeD<T> * First;
        struct nodeD<T> * Last;

        DoublyCL();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();

        int Summation();
        int EvenCount();
        int OddCount();
        int FirstOccurence(T No);
        int LastOccurence(T No);
        int Frequency(T No);
        int Maximum();
        int Minimum();
        bool CheckPresent(T No);
};

//////////////////////////////////////////////////////////////////////////////////////////////
// class of Stack

template <class T>
class Stack
{
    public:
        struct nodeS<T> *First;

        Stack();

        void Push(T No);    // Insert First
        void Pop();         // Delete First
        void Display(); 
        int Count();

        int Summation();
        int EvenCount();
        int OddCount();
        int FirstOccurence(T No);
        int LastOccurence(T No);
        int Frequency(T No);
        int Maximum();
        int Minimum();
        bool CheckPresent(T No);
};
////////////////////////////////////////////////////////////////////////////////////////////////////////
// Class Of Queue

template <class T>
class Queue
{
    public:
        struct nodeS<T> * First;

        Queue();

        void eQueue(T No);  // Insert Last
        void deQueue();     // Delete First
        void Display();
        int Count();

        int Summation();
        int EvenCount();
        int OddCount();
        int FirstOccurence(T No);
        int LastOccurence(T No);
        int Frequency(T No);
        int Maximum();
        int Minimum();
        bool CheckPresent(T No);
};
////////////////////////////////////////////////////////////////////////////////////////////////////////
// Class Of Tree

template <class T>
class Tree
{
    public:
        struct nodeTR<T> *First;

        Tree();
        void Insert(T No);
        int Count();
        
        void PreOrder();
        void InOrder();
        void PostOrder();

        int CountLeaf();

    private:

        void tPreorder(nodeTR<T> *);
        void tInorder(nodeTR<T> *);
        void tPostorder(nodeTR<T> *);
        int tCountLeaf(nodeTR<T> *);
        int tCount(nodeTR<T> *);
};

//******************************************************************************************************/////////
// Functions of SinglyLL class

template <class T>
SinglyLL<T> :: SinglyLL()
{
    First = NULL;
}
////########################################################################
template <class T>
void SinglyLL <T>  :: InsertFirst(T No)
{
    struct nodeS<T> *newn = new struct nodeS<T>;
    newn->Data = No;
    newn->Next = NULL;

    if(First == NULL)  // If linked list is empty
    {
        First = newn;
    }
    else    // if linked list contains at least one node
    {
        newn->Next = First;
        First = newn;
    }
}
///#########################################################################
template <class T>
void SinglyLL<T> :: InsertLast(T No)
{
    struct nodeS <T> * newn = new struct nodeS <T>;
    newn->Data = No;
    newn->Next = NULL;

    if(First == NULL)   // if linked list is empty
    {
        First = newn;
    }
    else if(First->Next == NULL)    // if linked list contains one node
    {
        First->Next = newn;
        newn->Next = NULL;
    }
    else    // if linked contains more than one node    
    {
        struct nodeS<T> *temp = First;

        while(temp->Next != NULL)
        {
            temp = temp->Next;
        } 
        temp->Next = newn;
        newn->Next = NULL;
    }
}
///########################################################################
template <class T>
void SinglyLL <T> :: InsertAtPos(T No, int iPos)
{
    struct nodeS<T> * newn = new struct nodeS<T>;
    struct nodeS<T> * temp = First;

    newn->Data = No;
    newn->Next = NULL;

    int NodeCnt = Count();

    if((iPos < 1) || (iPos > NodeCnt + 1))
    {
        cout<<"Invalid Positon\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == NodeCnt + 1)
    {
        InsertLast(No);
    }
    else 
    {
        int iCnt = 0;
       
        for(iCnt=1; iCnt<iPos-1; iCnt++)
        {
            temp = temp->Next;
        }
        newn->Next = temp->Next;
        temp->Next = newn;
    }
}
///#######################################################################
template <class T>
void SinglyLL <T> :: DeleteFirst()
{
    if(First == NULL)   // if linked list is empty
    {
        cout<<"Linked list is empty\n";
        return;
    }
    else if(First->Next == NULL)   // if linked list contains one node
    {
        delete First;
        First = NULL;
    }
    else  // If linked list contains more than one node
    {
        struct nodeS <T> *temp = First;
        First = First->Next;
        delete temp;
    }
}
///#######################################################################
template <class T>
void SinglyLL <T> :: DeleteLast()
{
     if(First == NULL)   // if linked list is empty
    {
        cout<<"Linked list is empty\n";
        return;
    }
    else if(First->Next == NULL)   // if linked list contains one node
    {
        delete First;
        First = NULL;
    }
    else  // If linked list contains more than one node
    {
        struct nodeS <T> *temp = First;

        while(temp->Next->Next != NULL)
        {
            temp = temp->Next;
        }
        delete temp->Next;
        temp->Next = NULL;
    }
}
//######################################################################
template <class T>
void SinglyLL<T> :: DeleteAtPos(int iPos)
{
    int NodeCnt = Count();

    if((iPos < 1) || (iPos > NodeCnt + 1))
    {
        cout<<"Linked list is empty\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == NodeCnt)
    {
        DeleteLast();
    }
    else 
    {
        struct nodeS<T> * temp1 = First;
        struct nodeS<T> * temp2 = NULL;
        int iCnt = 0;

        for(iCnt=1; iCnt<iPos-1; iCnt++)
        {
            temp1 = temp1->Next;
        }
        temp2 = temp1->Next;
        temp1->Next = temp1->Next->Next;
        delete temp2;
    }
}
///######################################################################
template <class T>
void SinglyLL <T> :: Display()
{
    cout<<"Elements of linked list are:\n";

    struct nodeS<T> *temp = First;

    while(temp != NULL)
    {
        cout<<"|"<<temp->Data<<"|->";
        temp = temp->Next;
    }
    cout<<"NULL\n";
}
///#######################################################################
template <class T>
int SinglyLL <T> :: Count()
{
    int iCnt = 0;

    struct nodeS<T> *temp = First;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp->Next;
    }
    return iCnt;

}
//###############################################################################################
template <class T>
int SinglyLL <T> :: Summation()
{
    int iSum = 0;
    struct nodeS<T> *temp = First;

    while(temp != NULL)
    {
        iSum = iSum + temp->Data;
        temp = temp->Next;
    }
    return iSum;
}
//###############################################################################################
template <class T>
int SinglyLL <T> :: EvenCount()
{
    struct nodeS<T> *temp = First;
    int iCnt = 0;
    while(temp != NULL)
    {
        if(((temp->Data) % 2 ) == 0)
        {
            iCnt++;
        }
        temp = temp->Next;
    }
    return iCnt;
}
//###############################################################################################
template <class T>
int SinglyLL <T> :: OddCount()
{
    struct nodeS<T> *temp = First;
    int iCnt = 0;
    while(temp != NULL)
    {
        if(((temp->Data) % 2 ) != 0)
        {
            iCnt++;
        }
        temp = temp->Next;
    }
    return iCnt;

    // int iCnt = 0;
    // iCnt = Count() - EvenCount();
    // return iCnt;

}
//###############################################################################################
template <class T>
int SinglyLL <T> :: FirstOccurence(T No)
{
    int iCnt = 0;
    struct nodeS<T> *temp = First;

    while(temp != NULL)
    {
        iCnt++;
        if(temp->Data == No)
        {
            break;
        }
        temp = temp->Next;
    }  
    if(iCnt == Count())
    {
        return false;
    }
    else 
    {
        return iCnt;
    }
}
//###############################################################################################
template <class T>
int SinglyLL <T> :: LastOccurence(T No)
{
    struct nodeS<T> *Temp = First;
    int iCnt = 0;
    int iPos = 0;

    while(Temp != NULL)
    {
        iCnt++;
        if(Temp->Data == No)
        {
            iPos = iCnt;
        }
        Temp = Temp->Next;
    }
    if(iCnt + 1 == Count())
    {
        return false;
    }
    else 
    {
        return iPos;
    }
}
//###############################################################################################
template <class T>
int SinglyLL <T> :: Frequency(T No)
{
    struct nodeS<T> *Temp = First;
    int iCount = 0;

    while(Temp != NULL)
    {
        if(Temp->Data == No)
        {
            iCount++;
        }
        Temp = Temp->Next;
    }
    return iCount;
}
//###############################################################################################
template <class T>
int SinglyLL<T> :: Maximum()
{
    struct nodeS<T> *temp = First;
    int iMax = 0;

    while(temp != NULL)
    {
        if((temp->Data) > iMax)
        {
            iMax = temp->Data;
        }
        temp = temp->Next;
    }
    return iMax;
}
//#####################################################################################
template <class T>
int SinglyLL<T> :: Minimum()
{
    struct nodeS<T> *temp = First;
    int iMin = temp->Data;

    while(temp != NULL)
    {
        if((temp->Data) < iMin)
        {
            iMin = temp->Data;
        }
        temp = temp->Next;
    }
    return iMin;
}
//#####################################################################################
template <class T>
bool SinglyLL <T> :: CheckPresent(T No)
{
    struct nodeS<T> *temp = First; 
    bool bFlag = false;

    while(temp != NULL)
    {
        if(temp->Data == No)
        {
            bFlag = true;
            break;
        }
        temp = temp->Next;
    }
    return bFlag;
}
//********************************************************************************************************************ss
//#########################################################################
// Functions Of SinglyCL class

template <class T>
SinglyCL<T> :: SinglyCL()
{
    First = NULL;
    Last = NULL;
}
//#########################################################################
template <class T>
void SinglyCL<T> :: InsertFirst(T No)
{
    struct nodeS <T> *newn = new struct nodeS<T>;
    newn->Data = No;
    newn->Next = NULL;

    if((First == NULL) && (Last == NULL))   // If linked list is empty
    {
        First = newn;
        Last = newn;
        Last->Next = newn;
    }
    else    // If linked list contains onr node
    {
        newn->Next = First;
        First = newn;
        Last->Next = First;
    }
}
//#########################################################################
template <class T>
void SinglyCL<T> :: InsertLast(T No)
{
    struct nodeS<T> *newn = new struct nodeS<T>;
    newn->Data =No;
    newn->Next = NULL;

    if((First == NULL) && (Last == NULL))   // if linked list is empty
    {
        First = Last = newn;
        Last->Next = newn;
    }
    else    // If linked list contains at least one node
    {
        Last->Next = newn;
        Last = newn;
        Last->Next = First;
    }
}
//#########################################################################
template <class T>
void SinglyCL<T> :: InsertAtPos(T No, int iPos)
{
    struct nodeS<T> *newn = new struct nodeS<T>;
    newn->Data = No;
    newn->Next =NULL;

    int NodeCnt = Count();
    int iCnt = 0;

    if((iPos < 1) || (iPos > NodeCnt + 1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == NodeCnt + 1)
    {
        InsertLast(No);
    }
    else
    {
        struct nodeS<T> *temp = First;

        for(iCnt=1; iCnt<iPos-1; iCnt++)
        {
            temp = temp->Next;
        }
        newn->Next = temp->Next;
        temp->Next = newn;
    }
}
//#########################################################################
template <class T>
void SinglyCL<T> :: DeleteFirst()
{
    if((First == NULL))   // If linked list is empty
    {
        cout<<"Linked list is empty\n";
        return;
    }
    else if(First == Last)  // If linked list contains one node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        struct nodeS<T> *temp = First;

        First = First->Next;
        Last->Next = First;
        delete temp; 
    }
}
//#########################################################################
template <class T>
void SinglyCL <T> :: DeleteLast()
{
    if((First == NULL))   // If linked list is empty
    {
        cout<<"Linked list is empty\n";
        return;
    }
    else if(First == Last)  // If linked list contains one node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        struct nodeS<T> *temp = First;

        while(temp->Next != Last)
        {
            temp = temp->Next;
        }

        delete Last;
        Last = temp;
        Last->Next = First;
    }
}
//#########################################################################
template <class T>
void SinglyCL <T> :: DeleteAtPos(int iPos)
{
    int NodeCnt = Count();

    if((iPos < 1) || (iPos > NodeCnt + 1))
    {
        cout<<"inavalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == NodeCnt)
    {
        DeleteLast();
    }
    else 
    {
        struct nodeS<T> * temp = First;
        struct nodeS<T> * temp1 = First;
        int iCnt = 0;

        for(iCnt = 1; iCnt<iPos-1; iCnt++)
        {
            temp = temp->Next;
        }
        temp1 = temp->Next;
        temp->Next = temp->Next->Next;
        delete temp1;
    }
}
//#########################################################################
template <class T>
void SinglyCL<T> :: Display()
{
    struct nodeS<T> *temp = First;
    if(First == NULL)
    {
        cout<<"Linked list is empty\n";
        return;
    }
    cout<<"Elements of linked list are:\n";

    do
    {
        cout<<"|"<<temp->Data<<"|->";
        temp = temp->Next;
    }while(temp != Last->Next);
    cout<<"\n";
}
//#########################################################################
template <class T>
int SinglyCL <T> :: Count()
{
    struct nodeS<T> *temp = First;
    int iCnt = 0;

    do
    {
        iCnt++;
        temp = temp->Next;
    }while(temp != Last->Next);
    return iCnt;
}
// ############################################################################
template <class T>
int SinglyCL<T> :: Summation()
{
    struct nodeS<T> *temp = First;
    int iSum = 0;

    do
    {
        iSum = iSum + temp->Data;
        temp = temp->Next;
    }while(temp != Last->Next);
    return iSum;
}
// ############################################################################
template <class T>
int SinglyCL<T> :: EvenCount()
{
    struct nodeS<T> *temp = First;
    int EvenCnt = 0;

    do
    {
        if(((temp->Data) % 2 ) == 0)
        {
            EvenCnt++;
        }
        temp = temp->Next;
    }while(temp != Last->Next);
    return EvenCnt;
}
// ############################################################################
template <class T>
int SinglyCL<T> :: OddCount()
{
    struct nodeS<T> *temp = First;
    int OddCnt = 0;

    do
    {
        if(((temp->Data) % 2 ) != 0)
        {
            OddCnt++;
        }
        temp = temp->Next;
    }while(temp != Last->Next);
    return OddCnt;
}
// ############################################################################
template <class T>
int SinglyCL<T> :: FirstOccurence(T No)
{
    struct nodeS<T> *temp = First;
    int iCnt = 0;

    do 
    {
        iCnt++;
        if(temp->Data == No)
        {
            break;
        }
        temp = temp->Next;
    }while(temp != Last->Next);
    if(iCnt == Count())
    {
        return false;
    }
    else 
    {
        return iCnt;
    }
}
// ############################################################################
template <class T>
int SinglyCL<T> :: LastOccurence(T No)
{
    struct nodeS<T> *temp = First;
    int iCnt = 0;
    int iPos = 0;

    do 
    {
        iCnt++;
        if(temp->Data == No)
        {
            iPos = iCnt;
        }
        temp = temp->Next;
    }while(temp != Last->Next);

    if(iCnt + 1 == Count())
    {
        return false;
    }
    else
    {
        return iPos;
    }
}
// ############################################################################
template <class T>
int SinglyCL<T> :: Frequency(T No)
{
    struct nodeS<T> *temp = First;
    int iCount = 0;

    do 
    {
        if(temp->Data == No)
        {
            iCount++;
        }
        temp = temp->Next;
    }while(temp != Last->Next);
    return iCount;
}
// ############################################################################
template <class T>
int SinglyCL<T> :: Maximum()
{
    struct nodeS<T> *temp = First;
    int iMax = 0;

    do 
    {
        if((temp->Data) > iMax)
        {
            iMax = temp->Data;
        }
        temp = temp->Next;
    }while(temp != Last->Next);
    return iMax;
}
// ############################################################################
template <class T>
int SinglyCL<T> :: Minimum()
{
    struct nodeS<T> *temp = First;
    int iMin = temp->Data;

    do 
    {
        if((temp->Data) < iMin)
        {
            iMin = temp->Data;
        }
        temp = temp->Next;
    }while(temp != Last->Next);
    return iMin;
}
// ############################################################################
template <class T>
bool SinglyCL<T> :: CheckPresent(T No)
{
    bool bFlag = false;
    struct nodeS<T> *temp = First;

    do 
    {
        if((temp->Data) == No)
        {
            bFlag = true;
            break;
        }
        temp = temp->Next;
    }while(temp != Last->Next);
    return bFlag;
}
// ############################################################################
//********************************************************************************************************************
// Functions of DoublyLL class
//#############################################################################
template <class T>
DoublyLL <T> :: DoublyLL()
{
    First = NULL;
}
//#############################################################################
template <class T>
void DoublyLL <T> :: InsertFirst(T No)
{
    struct nodeD<T> *newn = new struct nodeD<T>;
    newn->Data = No;
    newn->Next = NULL;
    newn->Prev = NULL;

    if(First == NULL)   // if linked list is empty
    {
        First = newn;
    }
    else    // If linked contains at least one node
    {
        newn->Next = First;
        First->Prev = newn;
        First = newn;
    }
}
//#############################################################################
template <class T>
void DoublyLL <T> :: InsertLast(T No)
{
    struct nodeD<T> *newn = new struct nodeD<T>;
    newn->Data = No;
    newn->Next = NULL;
    newn->Prev = NULL;

    if(First == NULL)   // If linbked list is empty
    {
        First = newn;
    }
    else if(First->Next == NULL)    // if linked list contains one node
    {
        First->Next = newn;
        newn->Prev = First;
        newn->Next = NULL;
    }
    else        // If linked list contains more than one node
    {
        struct nodeD<T> *temp = First;
        while(temp->Next != NULL)
        {
            temp = temp->Next;
        }
        temp->Next = newn;
        newn->Prev = temp;
        newn->Next = NULL;
    }

}
//#############################################################################
template <class T>
void DoublyLL <T> :: InsertAtPos(T No, int iPos)
{
    int NodeCnt = Count();

    if((iPos < 1) || (iPos > NodeCnt + 1))
    {
        cout<<"Inavlid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == NodeCnt + 1)
    {
        InsertLast(No);
    }
    else 
    {
        struct nodeD<T> *temp = First;
        struct nodeD<T> *newn = new struct nodeD<T>;
        newn->Data = No;
        newn->Next = NULL;
        newn->Prev = NULL;
        int iCnt = 0;

        for(iCnt=1; iCnt<iPos-1; iCnt++)
        {
            temp = temp->Next;
        }
        newn->Next = temp->Next;
        temp->Next->Prev = newn;
        newn->Prev = temp;
        temp->Next = newn; 
    }
}
//############################################################################
template <class T>
void DoublyLL <T> :: DeleteFirst()
{
    if(First == NULL)   // If linked list is empty
    {
        cout<<"Linked list is empty\n";
        return;
    }
    else if(First->Next == NULL)    // If linkd listcontains one node
    {
        delete First;
        First = NULL;
    }
    else    // if linked list contains more than one node
    {
        struct nodeD<T> *temp = First;

        First = First->Next;
        delete temp;
        First->Prev = NULL;
    }
}
//############################################################################
template <class T>
void DoublyLL <T> :: DeleteLast()
{
    if(First == NULL)   // If linked list is empty
    {
        cout<<"Linked list is empty\n";
        return;
    }
    else if(First->Next == NULL)    // If linkd listcontains one node
    {
        delete First;
        First = NULL;
    }
    else    // if linked list contains more than one node
    {
        struct nodeD<T> *temp = First;
        struct nodeD<T> *temp1 = NULL;

        while(temp->Next->Next != NULL)
        {
            temp = temp->Next;
        }
        temp1 = temp->Next;
        delete temp1;
        temp->Next = NULL; 
    }
}
//############################################################################
template <class T>
void DoublyLL <T> :: DeleteAtPos(int iPos)
{
    int NodeCnt = Count();

    if((iPos < 1) || (iPos > NodeCnt + 1))
    {
        cout<<"Inavalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == NodeCnt)
    {
        DeleteLast();
    }
    else
    {
        struct nodeD<T> *temp1 = First;
        struct nodeD<T> *temp2 = NULL;
        int iCnt = 0;

        for(iCnt=1; iCnt<iPos-1; iCnt++)
        {
            temp1 = temp1->Next;
        }
        temp2 = temp1->Next;
        temp1->Next = temp1->Next->Next;
        temp2->Next->Prev = temp1;
        delete temp2;
    }
}
//############################################################################
template <class T>
void DoublyLL <T> :: Display()
{
    if(First == NULL)
    {
        cout<<"Linked list is empty\n";
        return;
    }
    cout<<"Elements of linked list are:\n";
    struct nodeD<T> *temp = First;

    cout<<"NULL<=>";
    while(temp != NULL)
    {
        cout<<"|"<<temp->Data<<"|<=>";
        temp = temp->Next;
    }
    cout<<"NULL\n";
}
//###########################################################################
template <class T>
int DoublyLL<T> :: Count()
{
    if(First == NULL)
    {
        cout<<"Linked list is empty\n";
    }
    struct nodeD<T> *temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp->Next;
    }
   return iCnt;
}
//##############################################################################
template <class T>
int DoublyLL<T> :: Summation()
{
    struct nodeD<T> *temp = First;
    int iSum = 0;

    while(temp != NULL)
    {
        iSum = iSum + temp->Data;
        temp = temp->Next;
    }
    return iSum;
}
// ############################################################################
template <class T>
int DoublyLL<T> :: EvenCount()
{
    struct nodeD<T> *temp = First;
    int EvenCnt = 0;

    while(temp != NULL)
    {
        if(((temp->Data) % 2 ) == 0)
        {
            EvenCnt++;
        }
        temp = temp->Next;
    }
    return EvenCnt;
}
// ############################################################################
template <class T>
int DoublyLL<T> :: OddCount()
{
    struct nodeD<T> *temp = First;
    int OddCnt = 0;

    while(temp != NULL)
    {
        if(((temp->Data) % 2 ) != 0)
        {
            OddCnt++;
        }
        temp = temp->Next;
    }
    return OddCnt;
}
// ############################################################################
template <class T>
int DoublyLL<T> :: FirstOccurence(T No)
{
    struct nodeD<T> *temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        if((temp->Data) == No)
        {
            break;
        }
        temp = temp->Next;
    }
    if(iCnt == Count())
    {
        return false;
    }
    else
    {
        return iCnt;
    }
}
// ############################################################################
template <class T>
int DoublyLL<T> :: LastOccurence(T No)
{
    struct nodeD<T> *temp = First;
    int iPos = 0;
    int iCnt = 0;

    while(temp  != NULL)
    {
        iCnt++;
        if((temp->Data) == No)
        {
            iPos = iCnt;
        }
        temp = temp->Next;
    }
    if(iCnt + 1  == Count())
    {
        return false;
    }
    else
    {
        return iPos;
    }
}
// ############################################################################
template <class T>
int DoublyLL<T> :: Frequency(T No)
{
    int iCount = 0;
    struct nodeD<T> *temp = First;

    while(temp != NULL)
    {
        if((temp->Data) == No)
        {
            iCount++;
        }
        temp = temp->Next;
    }
    return iCount;
}
// ############################################################################
template <class T>
int DoublyLL<T> :: Maximum()
{
    struct nodeD<T> *temp = First;
    int iMax = 0;

    while(temp != NULL)
    {
        if((temp->Data) > iMax)
        {
            iMax = temp->Data;
        }
        temp = temp->Next;
    }
    return iMax;
}
// ############################################################################
template <class T>
int DoublyLL<T> :: Minimum()
{
    struct nodeD<T> *temp = First;
    int iMin = temp->Data;

    while(temp != NULL)
    {
        if((temp->Data) < iMin)
        {
            iMin = temp->Data;
        }
        temp = temp->Next;
    }
    return iMin;
}
// ############################################################################
template <class T>
bool DoublyLL<T> :: CheckPresent(T No)
{
    bool bflag = false;
    struct nodeD<T> *temp = First;

    while(temp != NULL)
    {
        if((temp->Data) == No)
        {
            bflag = true;
            break;
        }
        temp = temp->Next;
    }
    return bflag;
}
// ############################################################################
//*************************************************************************************************************************************
// Finctions Of Doubly Circular Linklist Class

//#############################################################################
template <class T>
DoublyCL <T> :: DoublyCL()
{
    First = NULL;
    Last = NULL;
}
//#############################################################################
template <class T>
void DoublyCL<T> :: InsertFirst(T No)
{
    struct nodeD<T> *newn = new struct nodeD<T>;
    newn->Data = No;
    newn->Next = NULL;
    newn->Prev = NULL;

    if((First == NULL) && (Last == NULL))   // If linked list is empty
    {
        First = newn;
        Last = newn;
    }
    else 
    {
        newn->Next = First;
        First->Prev = newn;
        First = newn;
    }
    First->Prev = Last;
    Last->Next = First;
}
//##############################################################################
template <class T>
void DoublyCL<T> :: InsertLast(T No)
{
    struct nodeD<T> *newn = new struct nodeD<T>;
    newn->Data = No;
    newn->Next = NULL;
    newn->Prev = NULL;

    if((First == NULL) && (Last == NULL))   // if linked list is empty
    {
        First = newn;
        Last = newn;
    }
    else    // if linked list contains one node
    {
        Last->Next = newn;
        newn->Prev = Last;
        Last = newn;
    }
    First->Prev = Last;
    Last->Next = First;
}
//##############################################################################
template <class T>
void DoublyCL <T> :: InsertAtPos(T No, int iPos)
{
    int NodeCnt = Count();

    if((iPos < 1) || (iPos > NodeCnt + 1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == NodeCnt + 1)
    {
        InsertLast(No);
    }
    else 
    {
        struct nodeD<T> *newn = new struct nodeD<T>;
        newn->Data = No;
        newn->Next = NULL;
        newn->Prev = NULL;

        struct nodeD<T> *temp = First;
        int iCnt = 0;

        for(iCnt=1; iCnt<iPos-1; iCnt++)
        {
            temp = temp->Next;
        }
        newn->Next = temp->Next;
        temp->Next->Prev = newn;
        temp->Next = newn;
        newn->Prev = temp;
    }
}
//##############################################################################
template <class T>
void DoublyCL<T> :: DeleteFirst()
{
    if((First == NULL) && (Last == NULL))   // if linled list is empty
    {
        cout<<"Linked list is empty\n";
        return;
    }
    else if(First == Last)  // if linked list contains one node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else    // if linked list contains more than one node
    {
        First = First->Next;
        delete Last->Next;
        First->Prev = Last;
        Last->Next = First;
    }
}
//##############################################################################
template <class T>
void DoublyCL<T> :: DeleteLast()
{
    if((First == NULL) && (Last == NULL))       // If linked list is empty
    {
        cout<<"Linked list is empty\n";
        return;
    }
    else if(First == Last)  // if linked is contains one node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else    // If linked list is contains more than one node
    {
        Last = Last->Prev;
        delete First->Prev;

        First->Prev = Last;
        Last->Next = First;
    }
}
//##############################################################################
template <class T>
void DoublyCL <T> :: DeleteAtPos(int iPos)
{
    int NodeCnt = Count();

    if((iPos < 1) || (iPos > NodeCnt + 1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == NodeCnt)
    {
        DeleteLast();
    }
    else 
    {
        struct nodeD<T> *temp = First;
        int iCnt = 0;

        for(iCnt=1; iCnt<iPos-1; iCnt++)
        {
            temp = temp->Next; 
        }
        temp->Next = temp->Next->Next;
        delete temp->Next->Prev;
        temp->Next->Prev = temp;
    }
}
//############################################################################
template <class T>
void DoublyCL<T> :: Display()
{
    struct nodeD<T> *temp = First;
    if(First == NULL && Last == NULL)
    {
        cout<<"Linked list is empty\n";
        return;
    }

    cout<<"Elements of linked list are:\n";

    do
    {
       cout<<"|"<<temp->Data<<"|<=>";
       temp = temp->Next;
    } while (temp != Last->Next);
    cout<<"\n";   
}
//###########################################################################
template <class T>
int DoublyCL<T> :: Count()
{
    struct nodeD<T> *temp = First;
    int iCnt = 0;
    if(First == NULL && Last == NULL)
    {
        cout<<"Linked list is empty\n";
    }

    do
    {
       iCnt++;
       temp = temp->Next;
    } while (temp != Last->Next);
    return iCnt;
}
//##############################################################################
template <class T>
int DoublyCL<T> :: Summation()
{
    struct nodeD<T> *temp = First;
    int iSum = 0;

    do
    {
        iSum = iSum + temp->Data;
        temp = temp->Next;
    }while(temp != Last->Next);
    return iSum;
}
// ############################################################################
template <class T>
int DoublyCL<T> :: EvenCount()
{
    struct nodeD<T> *temp = First;
    int EvenCnt = 0;

    do
    {
        if(((temp->Data) % 2 ) == 0)
        {
            EvenCnt++;
        }
        temp = temp->Next;
    }while(temp != Last->Next);
    return EvenCnt;
}
// ############################################################################
template <class T>
int DoublyCL<T> :: OddCount()
{
    struct nodeD<T> *temp = First;
    int OddCnt = 0;

    do
    {
        if(((temp->Data) % 2 ) != 0)
        {
            OddCnt++;
        }
        temp = temp->Next;
    }while(temp != Last->Next);
    return OddCnt;
}
// ############################################################################
template <class T>
int DoublyCL<T> :: FirstOccurence(T No)
{
    struct nodeD<T> *temp = First;
    int iCnt = 0;
    
    do
    {
        iCnt++;
        if((temp->Data) == No)
        {
            break;
        }
        temp = temp->Next;
    }while(temp != Last->Next);
    if(iCnt == Count())
    {
        return false;
    }
    else 
    {
        return iCnt;
    }
}
// ############################################################################
template <class T>
int DoublyCL<T> :: LastOccurence(T No)
{
    struct nodeD<T> *temp = First;
    int iPos = 0;
    int iCnt = 0;

    do
    {
        iCnt++;
        if((temp->Data) == No)
        {
            iPos = iCnt;
        }
        temp = temp->Next;
    }while(temp != Last->Next);
    return iPos;
}
// ############################################################################
template <class T>
int DoublyCL<T> :: Frequency(T No)
{
    struct nodeD<T> *temp = First;
    int iCount = 0;

    do 
    {
        if((temp->Data) == No)
        {
            iCount++;
        }
        temp = temp->Next;
    }while(temp != Last->Next);
    return iCount;
}
// ############################################################################
template <class T>
int DoublyCL<T> :: Maximum()
{
    struct nodeD<T> *temp = First;
    int iMax = 0;

    do
    {
        if((temp->Data) > iMax)
        {
            iMax = temp->Data;
        }
        temp = temp->Next;
    }while(temp != Last->Next);
    return iMax;
}
// ############################################################################
template <class T>
int DoublyCL<T> :: Minimum()
{
    struct nodeD<T> *temp = First;
    int iMin = temp->Data;

    do 
    {
        if((temp->Data) < iMin)
        {
            iMin = temp->Data;
        }
        temp = temp->Next;
    }while(temp != Last->Next);
    return iMin;
}
// ############################################################################
template <class T>
bool DoublyCL<T> :: CheckPresent(T No)
{
    struct nodeD<T> *temp = First;
    bool bFlag = false;

    do 
    {
        if((temp->Data) == No)
        {
            bFlag = true;
            break;
        }
        temp = temp->Next;
    }while(temp != Last->Next);
    return bFlag;
}
// ############################################################################
//***********************************************************************************************************************************
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Functions Of Stack class
template <class T>
Stack<T> :: Stack()
{
    First = NULL;
}
//##############################################################################
template <class T>
void Stack<T> :: Push(T No)     // Insert First
{
    struct nodeS<T> *newn = new struct nodeS<T>;
    newn->Data = No;
    newn->Next = NULL;

    if(First == NULL)   // if stack is empty
    {
        First = newn;
    }
    else    // if linked list contains one node
    {
        newn->Next = First;
        First = newn;
    }
}
//###############################################################################
template <class T>
void Stack<T> :: Pop()  // Delete First
{
    if(First == NULL)   // if Stack is empty
    {
        cout<<"Stack is empty\n";
        return;
    }
    else    // at least stack contains one element
    {
        struct nodeS<T> *temp = First;

        First = First->Next;
        delete temp;
    }
}
//###############################################################################
template <class T>
void Stack<T> :: Display()
{
    if(First == NULL)
    {
        cout<<"Stack is empty\n";
        return;
    }
    struct nodeS<T> *temp = First;
    cout<<"Elements of stack are:\n";

    while(temp != NULL)
    {
        cout<<"|"<<temp->Data<<"|->";
        temp = temp->Next;
    }
    cout<<"NULL\n";
}
//################################################################################
template <class T>
int Stack<T> :: Count()
{
    if(First == NULL)
    {
        cout<<"Stack is empty:\n";
    }

    struct nodeS<T> *temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp->Next;
    }
    return iCnt;
}
//##################################################################################
template <class T>
int Stack<T> :: Summation()
{
    struct nodeS<T> *temp = First;
    int iSum = 0;

    while(temp != NULL)
    {
        iSum = iSum + temp->Data;
        temp = temp->Next;
    }
    return iSum;
}
//##################################################################################
template <class T>
int Stack<T> :: EvenCount()
{
    struct nodeS<T> *temp = First;
    int EvenCnt = 0;

    while(temp != NULL)
    {
        if(((temp->Data) % 2) == 0)
        {
            EvenCnt++;
        }
        temp = temp->Next;
    }
    return EvenCnt;
}
//##################################################################################
template <class T>
int Stack<T> :: OddCount()
{
    struct nodeS<T> *temp = First;
    int OddCnt = 0;

    while(temp != NULL)
    {
        if(((temp->Data) % 2) != 0)
        {
            OddCnt++;
        }
        temp = temp->Next;
    }
    return OddCnt;   
}
//##################################################################################
template <class T>
int Stack<T> :: FirstOccurence(T No)
{
    struct nodeS<T> *temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        if((temp->Data) == No)
        {
            break;;
        }
        temp = temp->Next;
    }
    if(iCnt == Count())
    {
        return false;
    }
    else
    {
        return iCnt;
    }
}
//##################################################################################
template <class T>
int Stack<T> :: LastOccurence(T No)
{
    struct nodeS<T> *temp = First;
    int iPos = 0;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        if((temp->Data) == No)
        {
            iPos = iCnt;
        }
        temp = temp->Next;
    }
    return iPos;
}
//##################################################################################
template <class T>
int Stack<T> :: Frequency(T No)
{
    int iCount = 0;
    struct nodeS<T> *temp = First;

    while(temp != NULL)
    {
        if((temp->Data) == No)
        {
            iCount++;
        }
        temp = temp->Next;
    }
    return iCount;
}
//##################################################################################
template <class T>
int Stack<T> :: Maximum()
{
    struct nodeS<T> *temp = First;
    int iMax = 0;

    while(temp != NULL)
    {
        if((temp->Data) > iMax)
        {
            iMax = temp->Data;
        }
        temp = temp->Next;
    }
    return iMax;
}
//##################################################################################
template <class T>
int Stack<T> :: Minimum()
{
    struct nodeS<T> *temp = First;
    int iMin = temp->Data;

    while(temp != NULL)
    {
        if((temp->Data) < iMin)
        {
            iMin = temp->Data;
        }
        temp = temp->Next;
    }
    return iMin;
}
//##################################################################################
template <class T>
bool Stack<T> :: CheckPresent(T No)
{
    struct nodeS<T> *temp = First;
    bool bFlag = false;

    while(temp != NULL)
    {
        if((temp->Data) == No)
        {
            bFlag = true;
            break;
        }
        temp = temp->Next;
    }
}
//####################################################################################
//******************************************************************************************************************************
////////////////////////////////////////////////////////////////////////////////////////////////////////
// Functions of Queue class

template <class T>
Queue<T> :: Queue()
{
    First = NULL;
}
//##################################################################################
template <class T>
void Queue<T> :: eQueue(T No)       // Insert Last
{
    struct nodeS<T> *newn = new struct nodeS<T>;
    struct nodeS<T> *temp = First;
    newn->Data = No;
    newn->Next = NULL;

    if(First == NULL)   // if Queue is empty
    {
        First = newn;
    }
    else 
    {
        while(temp->Next != NULL)
        {
            temp = temp->Next;
        }
        temp->Next = newn;
    }
}
//#################################################################################
template <class T>
void Queue<T> :: deQueue()      // Delete First
{
    if(First == NULL)   // if queue is empty
    {
        cout<<"Queue ia empty\n";
        return;
    }
    else    // if queue contains at least one node
    {
        struct nodeS<T> *temp = First;

        First = First->Next;
        delete temp;   
    }
}
//################################################################################
template <class T>
void Queue<T> :: Display()
{
    if(First == NULL)
    {
        cout<<"Queue is empty\n";
        return;
    }

    struct nodeS<T> *temp = First;
    cout<<"Elements of queue are:\n";

    while(temp != NULL)
    {
        cout<<"|"<<temp->Data<<"|->";
        temp = temp->Next;
    }
    cout<<"NULL\n";
}
//######################################################################################
template <class T>
int Queue<T> :: Count()
{
    if(First == NULL)
    {
        cout<<"Queue is empty\n";
    }

    struct nodeS<T> *temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp->Next;
    }
    return iCnt;
}
//##################################################################################
template <class T>
int Queue<T> :: Summation()
{
    struct nodeS<T> *temp = First;
    int iSum = 0;

    while(temp != NULL)
    {
        iSum = iSum + temp->Data;
        temp = temp->Next;
    }
    return iSum;
}
//##################################################################################
template <class T>
int Queue<T> :: EvenCount()
{
    struct nodeS<T> *temp = First;
    int EvenCnt = 0;

    while(temp != NULL)
    {
        if(((temp->Data) % 2) == 0)
        {
            EvenCnt++;
        }
        temp = temp->Next;
    }
    return EvenCnt;
}
//##################################################################################
template <class T>
int Queue<T> :: OddCount()
{
    struct nodeS<T> *temp = First;
    int OddCnt = 0;

    while(temp != NULL)
    {
        if(((temp->Data) % 2) != 0)
        {
            OddCnt++;
        }
        temp = temp->Next;
    }
    return OddCnt;
}
//##################################################################################
template <class T>
int Queue<T> :: FirstOccurence(T No)
{
    struct nodeS<T> *temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        if((temp->Data) == No)
        {
            break;;
        }
        temp = temp->Next;
    }
    if(iCnt == Count())
    {
        return false;
    }
    else
    {
        return iCnt;
    }
}
//##################################################################################
template <class T>
int Queue<T> :: LastOccurence(T No)
{
    struct nodeS<T> *temp = First;
    int iPos = 0;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        if((temp->Data) == No)
        {
            iPos = iCnt;
        }
        temp = temp->Next;
    }
    return iPos;
}
//##################################################################################
template <class T>
int Queue<T> :: Frequency(T No)
{
    int iCount = 0;
    struct nodeS<T> *temp = First;

    while(temp != NULL)
    {
        if((temp->Data) == No)
        {
            iCount++;
        }
        temp = temp->Next;
    }
    return iCount;
}
//##################################################################################
template <class T>
int Queue<T> :: Maximum()
{
    struct nodeS<T> *temp = First;
    int iMax = 0;

    while(temp != NULL)
    {
        if((temp->Data) > iMax)
        {
            iMax = temp->Data;
        }
        temp = temp->Next;
    }
    return iMax;
}
//##################################################################################
template <class T>
int Queue<T> :: Minimum()
{
    struct nodeS<T> *temp = First;
    int iMin = temp->Data;

    while(temp != NULL)
    {
        if((temp->Data) < iMin)
        {
            iMin = temp->Data;
        }
        temp = temp->Next;
    }
    return iMin;
}
//##################################################################################
template <class T>
bool Queue<T> :: CheckPresent(T No)
{
    struct nodeS<T> *temp = First;
    bool bFlag = false;

    while(temp != NULL)
    {
        if((temp->Data) == No)
        {
            bFlag = true;
            break;
        }
        temp = temp->Next;
    }
}
//####################################################################################
//***************************************************************************************************************************
// ###################################################################################
// Functions of Tree

template <class T>
Tree<T> :: Tree()
{
    First = NULL;
}
// ####################################################################################
template <class T>
void Tree<T> :: Insert(T No)
{
    struct nodeTR<T> *newn = new struct nodeTR<T>;
    newn->Data = No;
    newn->rchild = NULL;
    newn->lchild = NULL;

    struct nodeTR<T> *temp = First;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        while(1)
        {
            if(No > (temp->Data))
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if(No < (temp->Data))
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
            else if(No == temp->Data)
            {
                delete newn;
                cout<<"Duplicate elements is not allowed in Tree"<<"\n";
                break;
            }
        }
    }
}
// ################################################################################
template <class T>
int Tree<T> :: Count()
{
    int iRet = 0;
    iRet = tCount(First);
}
// ################################################################################
template <class T>
void Tree<T> :: PreOrder()
{
    cout<<"Preorder:\t";
    tPreorder(First);
    cout<<"\n";
}
// ################################################################################
template <class T>
void Tree<T> :: InOrder()
{
    cout<<"InOrder:\t";
    tInorder(First);
    cout<<"\n";
}
// ################################################################################
template <class T>
void Tree<T> :: PostOrder()
{
    cout<<"PostOrder:\t";
    tPostorder(First);
    cout<<"\n";
}
// ################################################################################
template <class T>
int Tree<T> :: CountLeaf()
{
    int iRet = 0;
    iRet = tCountLeaf(First);
}
// ################################################################################

template <class T>
void Tree<T> :: tPreorder(nodeTR<T> *temp)
{
    if(temp!=NULL)
    {
        cout<<temp->Data<<"\t";
        tPreorder(temp->lchild);
        tPreorder(temp->rchild);
    }
}
// ##################################################################################
template <class T>
void Tree<T> :: tInorder(nodeTR<T> *temp)
{
    if(temp!=NULL)
    {
        tInorder(temp->lchild);
        cout<<temp->Data<<"\t";
        tInorder(temp->rchild);
    }
}
// ##################################################################################
template <class T>
void Tree<T> :: tPostorder(nodeTR<T> *temp)
{
    if(temp!=NULL)
    {
        tPostorder(temp->lchild);
        tPostorder(temp->rchild);
        cout<<temp->Data<<"\t";
    }
}
// ##################################################################################
template <class T>
int Tree<T> :: tCount(nodeTR<T> *temp)
{
    static int Count = 0;
    if(temp != NULL)
    {
        Count++;

        tCount(temp->lchild);
        tCount(temp->rchild);
    }
    return Count;
}
// ################################################################################
template <class T>
int Tree<T> :: tCountLeaf(nodeTR<T> *temp)
{
    static int Count = 0;

    if(temp != NULL)
    {
        if((temp->lchild == NULL) && (temp->rchild == NULL))
        {
            Count++;
        }

        tCountLeaf(temp->lchild);
        tCountLeaf(temp->rchild);
    }
    return Count;
}
//##################################################################################
//**************************************************************************************************************************
