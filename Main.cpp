#include<iostream>
#include "GenericSTL.h"
using namespace std;

int main()
{
    int iRet = 0;
    bool bRet = 0;

    cout<<"-------------------------------------------------------------------------------\n";
    cout<<"---------------------- * Singly Linear LinkList * -----------------------------\n";

    SinglyLL <int> slobj;

    slobj.InsertFirst(20);
    slobj.InsertFirst(17);
    slobj.InsertFirst(11);
    slobj.InsertLast(17);
    slobj.InsertLast(110);
    slobj.InsertLast(121);
    slobj.Display();
    iRet = slobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";

    slobj.InsertAtPos(105,5);
    slobj.Display();
    iRet = slobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";

    slobj.DeleteAtPos(5);
    slobj.Display();
    iRet = slobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";


    slobj.DeleteFirst();
    slobj.Display();
    iRet = slobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";

    slobj.DeleteLast();
    slobj.Display();
    iRet = slobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";

    iRet = slobj.Summation();
    cout<<"Summation of all nodes in Linklist is : "<<iRet<<"\n";

    iRet = slobj.EvenCount();
    cout<<"Number of Even numbers in LinkList is : "<<iRet<<"\n";

    iRet = slobj.OddCount();
    cout<<"Number of Odd numbers in LinkList is : "<<iRet<<"\n";

    iRet = slobj.FirstOccurence(17);
    cout<<"First Occurence of your enterd numberd is :"<<iRet<<"\n";

    iRet = slobj.LastOccurence(17);
    cout<<"Last Occurence of your enterd numberd is :"<<iRet<<"\n";

    iRet = slobj.Frequency(17);
    cout<<"Frequency of your enterd numberd is :"<<iRet<<"\n";

    iRet = slobj.Maximum();
    cout<<"Maximum number in LinkList is :"<<iRet<<"\n";

    iRet = slobj.Minimum();
    cout<<"Minimum number in LinkList is :"<<iRet<<"\n";

    bRet = slobj.CheckPresent(25);
    if(bRet == true)
    {
        cout<<"Your enterd numbered is Present\n";
    }
    else
    {
        cout<<"Your entered numbered is Absent\n";
    }
    cout<<"-------------------------------------------------------------------------------\n";
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout<<"-------------------------------------------------------------------------------\n";
    cout<<"---------------------- * Singly Circular LinkList * -----------------------------\n";

    SinglyCL <int> scobj;

    scobj.InsertFirst(20);
    scobj.InsertFirst(17);
    scobj.InsertFirst(11);
    scobj.InsertLast(17);
    scobj.InsertLast(1);
    scobj.InsertLast(12);
    scobj.Display();
    iRet = scobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";

    scobj.InsertAtPos(105,5);
    scobj.Display();
    iRet = scobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";

    scobj.DeleteAtPos(5);
    scobj.Display();
    iRet = scobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";


    scobj.DeleteFirst();
    scobj.Display();
    iRet = scobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";

    scobj.DeleteLast();
    scobj.Display();
    iRet = scobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";

    iRet = scobj.Summation();
    cout<<"Summation of all nodes in Linklist is : "<<iRet<<"\n";

    iRet = scobj.EvenCount();
    cout<<"Number of Even numbers in LinkList is : "<<iRet<<"\n";

    iRet = scobj.OddCount();
    cout<<"Number of Odd numbers in LinkList is : "<<iRet<<"\n";

    iRet = scobj.FirstOccurence(17);
    cout<<"First Occurence of your enterd numberd is :"<<iRet<<"\n";

    iRet = scobj.LastOccurence(17);
    cout<<"Last Occurence of your enterd numberd is :"<<iRet<<"\n";

    iRet = scobj.Frequency(17);
    cout<<"Frequency of your enterd numberd is :"<<iRet<<"\n";

    iRet = scobj.Maximum();
    cout<<"Maximum number in LinkList is :"<<iRet<<"\n";

    iRet = scobj.Minimum();
    cout<<"Minimum number in LinkList is :"<<iRet<<"\n";

    bRet = scobj.CheckPresent(25);
    if(bRet == true)
    {
        cout<<"Your enterd numbered is Present\n";
    }
    else
    {
        cout<<"Your entered numbered is Absent\n";
    }
    cout<<"-------------------------------------------------------------------------------\n";
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout<<"-------------------------------------------------------------------------------\n";
    cout<<"---------------------- * Doubly Linear LinkList * -----------------------------\n";

    DoublyLL <int> dlobj;

    dlobj.InsertFirst(20);
    dlobj.InsertFirst(17);
    dlobj.InsertFirst(11);
    dlobj.InsertLast(17);
    dlobj.InsertLast(1);
    dlobj.InsertLast(12);
    dlobj.Display();
    iRet = dlobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";

    dlobj.InsertAtPos(105,5);
    dlobj.Display();
    iRet = dlobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";

    dlobj.DeleteAtPos(5);
    dlobj.Display();
    iRet = dlobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";


    dlobj.DeleteFirst();
    dlobj.Display();
    iRet = dlobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";

    dlobj.DeleteLast();
    dlobj.Display();
    iRet = dlobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";

    iRet = dlobj.Summation();
    cout<<"Summation of all nodes in Linklist is : "<<iRet<<"\n";

    iRet = dlobj.EvenCount();
    cout<<"Number of Even numbers in LinkList is : "<<iRet<<"\n";

    iRet = dlobj.OddCount();
    cout<<"Number of Odd numbers in LinkList is : "<<iRet<<"\n";

    iRet = dlobj.FirstOccurence(17);
    cout<<"First Occurence of your enterd numberd is :"<<iRet<<"\n";

    iRet = dlobj.LastOccurence(17);
    cout<<"Last Occurence of your enterd numberd is :"<<iRet<<"\n";

    iRet = dlobj.Frequency(17);
    cout<<"Frequency of your enterd numberd is :"<<iRet<<"\n";

    iRet = dlobj.Maximum();
    cout<<"Maximum number in LinkList is :"<<iRet<<"\n";

    iRet = dlobj.Minimum();
    cout<<"Minimum number in LinkList is :"<<iRet<<"\n";

    bRet = dlobj.CheckPresent(25);
    if(bRet == true)
    {
        cout<<"Your enterd numbered is Present\n";
    }
    else
    {
        cout<<"Your entered numbered is Absent\n";
    }
    cout<<"-------------------------------------------------------------------------------\n";
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout<<"-------------------------------------------------------------------------------\n";
    cout<<"---------------------- * Doubly Circular LinkList * -----------------------------\n";

    DoublyCL <int> dcobj;

    dcobj.InsertFirst(20);
    dcobj.InsertFirst(17);
    dcobj.InsertFirst(11);
    dcobj.InsertLast(17);
    dcobj.InsertLast(1);
    dcobj.InsertLast(12);
    dcobj.Display();
    iRet = dcobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";

    dcobj.InsertAtPos(105,5);
    dcobj.Display();
    iRet = dcobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";

    dcobj.DeleteAtPos(5);
    dcobj.Display();
    iRet = dcobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";


    dcobj.DeleteFirst();
    dcobj.Display();
    iRet = dcobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";

    dcobj.DeleteLast();
    dcobj.Display();
    iRet = dcobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";

    iRet = dcobj.Summation();
    cout<<"Summation of all nodes in Linklist is : "<<iRet<<"\n";

    iRet = dcobj.EvenCount();
    cout<<"Number of Even numbers in LinkList is : "<<iRet<<"\n";

    iRet = dcobj.OddCount();
    cout<<"Number of Odd numbers in LinkList is : "<<iRet<<"\n";

    iRet = dcobj.FirstOccurence(17);
    cout<<"First Occurence of your enterd numberd is :"<<iRet<<"\n";

    iRet = dcobj.LastOccurence(17);
    cout<<"Last Occurence of your enterd numberd is :"<<iRet<<"\n";

    iRet = dcobj.Frequency(17);
    cout<<"Frequency of your enterd numberd is :"<<iRet<<"\n";

    iRet = dcobj.Maximum();
    cout<<"Maximum number in LinkList is :"<<iRet<<"\n";

    iRet = dcobj.Minimum();
    cout<<"Minimum number in LinkList is :"<<iRet<<"\n";

    bRet = dcobj.CheckPresent(25);
    if(bRet == true)
    {
        cout<<"Your enterd numbered is Present\n";
    }
    else
    {
        cout<<"Your entered numbered is Absent\n";
    }
    cout<<"-------------------------------------------------------------------------------\n";
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout<<"-------------------------------------------------------------------------------\n";
    cout<<"---------------------- * Stack * -----------------------------\n";

    Stack <int> sobj;

    sobj.Push(51);
    sobj.Push(21);
    sobj.Push(11);
    sobj.Push(61);
    sobj.Push(21);
    sobj.Push(11);
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";

    sobj.Pop();
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";

    iRet = sobj.Summation();
    cout<<"Summation of all nodes in Linklist is : "<<iRet<<"\n";

    iRet = sobj.EvenCount();
    cout<<"Number of Even numbers in LinkList is : "<<iRet<<"\n";

    iRet = sobj.OddCount();
    cout<<"Number of Odd numbers in LinkList is : "<<iRet<<"\n";

    iRet = sobj.FirstOccurence(17);
    cout<<"First Occurence of your enterd numberd is :"<<iRet<<"\n";

    iRet = sobj.LastOccurence(17);
    cout<<"Last Occurence of your enterd numberd is :"<<iRet<<"\n";

    iRet = sobj.Frequency(17);
    cout<<"Frequency of your enterd numberd is :"<<iRet<<"\n";

    iRet = sobj.Maximum();
    cout<<"Maximum number in LinkList is :"<<iRet<<"\n";

    iRet = sobj.Minimum();
    cout<<"Minimum number in LinkList is :"<<iRet<<"\n";

    bRet = sobj.CheckPresent(25);
    if(bRet == true)
    {
        cout<<"Your enterd numbered is Present\n";
    }
    else
    {
        cout<<"Your entered numbered is Absent\n";
    }
    cout<<"-------------------------------------------------------------------------------\n";

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout<<"-------------------------------------------------------------------------------\n";
    cout<<"---------------------- * Queue * -----------------------------\n";

    Queue <int> qobj;

    qobj.eQueue(11);
    qobj.eQueue(21);
    qobj.eQueue(51);
    qobj.eQueue(101);
    qobj.eQueue(111);
    qobj.Display();
    iRet = qobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";

    qobj.deQueue();
    qobj.Display();
    iRet = qobj.Count();
    cout<<"Number of nodes in linklist is :"<<iRet<<"\n";
    
    iRet = qobj.Summation();
    cout<<"Summation of all nodes in Linklist is : "<<iRet<<"\n";

    iRet = qobj.EvenCount();
    cout<<"Number of Even numbers in LinkList is : "<<iRet<<"\n";

    iRet = qobj.OddCount();
    cout<<"Number of Odd numbers in LinkList is : "<<iRet<<"\n";

    iRet = qobj.FirstOccurence(17);
    cout<<"First Occurence of your enterd numberd is :"<<iRet<<"\n";

    iRet = qobj.LastOccurence(17);
    cout<<"Last Occurence of your enterd numberd is :"<<iRet<<"\n";

    iRet = qobj.Frequency(17);
    cout<<"Frequency of your enterd numberd is :"<<iRet<<"\n";

    iRet = qobj.Maximum();
    cout<<"Maximum number in LinkList is :"<<iRet<<"\n";

    iRet = qobj.Minimum();
    cout<<"Minimum number in LinkList is :"<<iRet<<"\n";

    bRet = qobj.CheckPresent(25);
    if(bRet == true)
    {
        cout<<"Your enterd numbered is Present\n";
    }
    else
    {
        cout<<"Your entered numbered is Absent\n";
    }
    cout<<"-------------------------------------------------------------------------------\n";
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout<<"-------------------------------------------------------------------------------\n";
    cout<<"---------------------- * Tree * -----------------------------\n";

    Tree <int> tobj;
    
    tobj.Insert(52);
    tobj.Insert(11);
    tobj.Insert(65);
    // tobj.Insert(63);
    // tobj.Insert(10);
    // tobj.Insert(85);

    tobj.PreOrder();
    tobj.InOrder();
    tobj.PostOrder();

    iRet = tobj.Count();
    cout<<"Total nodes in Tree is :"<<iRet<<"\n";

    iRet = tobj.CountLeaf();
    cout<<"Total leaf nodes in Tree is :"<<iRet<<"\n";

}