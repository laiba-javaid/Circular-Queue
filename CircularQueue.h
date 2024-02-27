#pragma once
class CircularQueue
{
	int size;
	int front, rear, noOfElements;
	int* A;
public:
	CircularQueue();
	bool IsFull();
	bool IsEmpty();
	int GetFront();
	void Enqueue(int);
	void Dequeue();
	~CircularQueue();
};

