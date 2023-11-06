#include <iostream>
#include <cstdlib>
#include <ctype.h>
using namespace std;

// Define the default capacity of the queue
#define SIZE 10

// A class to represent a queue
template < class X > class queue
{
  X *arr;                       // array to store queue elements
  int capacity;                 // maximum capacity of the queue
  int front;                    // front points to the front element in the queue (if any)
  int rear;                     // rear points to the last element in the queue
  int count;                    // current size of the queue

public:
  queue (int size = SIZE);      // constructor
  void dequeue ();
  void enqueue (X x);
  void display ();
  X peek ();
  int size ();
  bool isEmpty ();
  bool isFull ();
};

// Constructor to initialize a queue
template < class X > queue < X >::queue (int size)
{
  arr = new X[size];
  capacity = size;
  front = 0;
  rear = -1;
  count = 0;
}

// Utility function to dequeue the front element
template < class X > void queue < X >::dequeue ()
{

  cout << "Removing " << arr[front] << endl;
  cout<<"\n";
  front = (front + 1) % capacity;
  count--;
}

// This is the display function
template < class X > void queue < X >::display ()
{
  cout << "The no. of elements in the queue is: " << size () << "\n";
  for (int i = 0; i < count; i++)
    {
      cout << arr[i] << " ";
    }
  cout << "\n\n";
}

// Utility function to add an item to the queue
template < class X > void queue < X >::enqueue (X item)
{
  cout << "Inserting " << item << endl;
  cout<<"\n";
  rear = (rear + 1) % capacity;
  arr[rear] = item;
  count++;
}

// Utility function to return the front element of the queue
template < class X > X queue < X >::peek ()
{
  if (isEmpty ())
    {
      cout << "Queue UnderFlow!\n";
      exit (EXIT_FAILURE);
    }
  return arr[front];
}

// Utility function to return the size of the queue
template < class X > int queue < X >::size ()
{
  return count;
}

// Utility function to check if the queue is empty or not
template < class X > bool queue < X >::isEmpty ()
{
  return (size () == 0);
}

// Utility function to check if the queue is full or not
template < class X > bool queue < X >::isFull ()
{
  return (size () == capacity);
}

int main ()
{
  // create a queue of capacity 4
  queue <string> q(4);
  string value;
  int choice;
  cout<<"---------QUEUE IMPLEMENTATION-----------\n";
  while (1)
    {
      cout<<"1. Insert Element\n2. Delete Element\n3. Peek\n4. Display\n5. Exit\n";
      cout<<"\nEnter your choice : ";
      cin>>choice;
      switch (choice)
        {
        case 1:
                if(q.isFull())
                {
                        cout<<"Queue Overflow! Can't insert more elements!\n\n";
                }
                else
                {
                        cout<<"\nEnter the value to insert: ";
                        cin >> value;
                        q.enqueue(value);
                }
          break;

        case 2:
                if (q.isEmpty ())
                {
                        cout << "Queue Underflow!\n\n";
                }
                else
                {
                        q.dequeue ();
                }
          break;

        case 3:
                if (q.isEmpty ())
                {
                        cout << "Queue Underflow!\n\n";
                }
                else
                {
                        cout << "The front element of the queue is: " << q.peek () << "\n\n";
                }

          break;

        case 4:
                if (q.isEmpty ())
                {
                        cout << "Queue Underflow!\n\n";
                }
                else
                {
                        cout << "The array elements: ";
                        q.display ();
                }
          break;

        case 5:
          exit (0);
          break;

        default:
          cout<<"\nWrong Choice\n";
          break;
        }
    }
      return 0;
}
