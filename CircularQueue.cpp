#include "CircularQueue.h"
#include<iostream>
using namespace std;

CircularQueue::CircularQueue()
{
	cout << "Enter the Size: ";
	cin >> size;
	A = new int[size];
	noOfElements = 0;
	rear = -1;
	front =0;
}
bool CircularQueue::IsFull()
{
	if (noOfElements == size)
		return true;
	else
		return false;

}

bool CircularQueue::IsEmpty()
{
	if (noOfElements == 0)
		return true;
	else
		return false;
}
void CircularQueue::Enqueue(int value)
{
	if (IsFull())
		cout << "List is Full!!" << endl;
	else
	{
		rear = (rear + 1) % size;
		A[rear] = value;
		cout << "Value enqueued at " << rear << " index!!" << endl;
		noOfElements++;

	}
}
void CircularQueue::Dequeue()
{
	if (IsEmpty())
		cout << "List is Empty!!" << endl;
	else
	{
		front = (front + 1) % size;
		cout << "Value is dequeued from " << front-1 << " index!!" << endl;
		noOfElements--;
	}
}
int CircularQueue::GetFront()
{
	if (IsEmpty())
		cout << "List is Empty!!" << endl;
	else
	{
		return front;
	}
}
CircularQueue::~CircularQueue()
{
	delete []A;
}