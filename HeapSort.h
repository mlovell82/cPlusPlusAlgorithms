#pragma once

class Heap {
public:
	Heap();
	~Heap();

	int size();
	bool isEmpty();
	int minElement();
	int minKey();
	void insertItem();
	void removeMin();

private:
	int _heap[];
};

class HeapSorter{
public:
	HeapSorter();
	~HeapSorter();
	void heapify();
	void sortHeap();

private:
	Heap _heap;
};
