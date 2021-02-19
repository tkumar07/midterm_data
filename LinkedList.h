//LinkedList.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
using namespace std;

template<class T>
class LinkedList {
    private:
        Node<T> *front, *rear;                       // pointers pointing to the head and the end of the LinkedList
        Node<T> *prevPtr, *currPtr;                  // cursor pointers pointing to the current position and the previous position, updated by the inserting and deleting operations
        int size;                                    // the number of Nodes in the LinkedList
        int position;                                // the position of the current cursor
        
        Node<T> *GetNode( const T &item, Node<T> *ptrNext=NULL ); // generate a new Node. the data is 'item' and the next pointer is 'ptrNext'
        
        void FreeNode( Node<T> *p );                 // free one node
        
        void CopyList( const LinkedList<T> &L );     // copy the LinkedList L into the current LinkedList object, used by the copy constructor and the operator '='
        
    public:
        LinkedList();                                // constructor
        LinkedList( const LinkedList<T> &L );        // copy constructor
        ~LinkedList();                               // destructor
        LinkedList<T> & operator= (const LinkedList<T> &L);  // overloaded assignment operator '='
        LinkedList<T> operator- (LinkedList<T>& L);
        LinkedList<T> operator+ (LinkedList<T>& L);
        int ListSize() const;                        // return the number of nodes in the current LinkedList
        bool ListEmpty() const;                      // if the current LinkedList is empty
        
        void Reset( int pos=0 );                     // reset the position of the cursor
        void Next();                                 // move the cursor to the next node
        bool EndOfList() const;                      // if the cursor is at the end of the list
        int CurrentPosition(void) const;             // return the current position of the cursor
        
        void InsertFront( const T &item );           // insert data at the head of the list
        void InsertRear( const T &item );            // insert data at the end of the list
        void InsertAt( const T &item );              // insert data before the current node
        void InsertAfter( const T &item );           // insert data after the current node
        
        T DeleteFront();                             // delete the node at the head and return its data
        void DeleteAt();                             // delete the current node
        
        T& Data();                                   // return the reference to the data in current node

        void ClearList();                            // clear the LinkedList and free all the memory space, called by destructor
};


template <class T>
Node<T> *LinkedList<T>::GetNode(const T& item, 
                      Node<T>* ptrNext)
{
    Node<T> newLink(item, ptrNext);
    
    return newLink;
}

template <class T>
void LinkedList<T>::FreeNode(Node<T> *p)
{

}

template <class T>
void LinkedList<T>::CopyList(const LinkedList<T>& L)
{

}


template <class T>
LinkedList<T>::LinkedList(void): front(NULL), rear(NULL),
      prevPtr(NULL),currPtr(NULL), size(0), position(-1)
{
// nothing to do here
}

template <class T>
LinkedList<T>::LinkedList(const LinkedList<T>& L)
{

}

template <class T>
void LinkedList<T>::ClearList(void)
{

}

template <class T>
LinkedList<T>::~LinkedList(void)
{
    // already implemented
    // nothing to do here
    ClearList();
}

template <class T>
LinkedList<T>& LinkedList<T>::operator= 
               (const LinkedList<T>& L)
{


}

template <class T>
int LinkedList<T>::ListSize(void) const
{

}
                      
template <class T>
bool LinkedList<T>::ListEmpty(void) const
{

}

template <class T>
void LinkedList<T>::Next(void)
{

}

template <class T>
bool LinkedList<T>::EndOfList(void) const
{

}

template <class T>
int LinkedList<T>::CurrentPosition(void) const
{

}

template <class T>
void LinkedList<T>::Reset(int pos)
{

}

template <class T>
T& LinkedList<T>::Data(void)
{

}

template <class T>
void LinkedList<T>::InsertFront(const T& item)
{

}

template <class T>
void LinkedList<T>::InsertRear(const T& item)
{

}

template <class T>
void LinkedList<T>::InsertAt(const T& item)
{

}

template <class T>
void LinkedList<T>::InsertAfter(const T& item)
{

}

template <class T>
T LinkedList<T>::DeleteFront(void)
{

}

template <class T>
void LinkedList<T>::DeleteAt(void)
{

}

template <class T>
LinkedList<T> LinkedList<T>::operator+
               (LinkedList<T>& L)
{

}


template <class T>
LinkedList<T> LinkedList<T>::operator-
               (LinkedList<T>& L)
{

}

#endif

