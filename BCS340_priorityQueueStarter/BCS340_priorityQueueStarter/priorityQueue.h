// (c) 2018 David S. Gerstl, all rights reserved
#ifndef H_PRIORITYQUEUE
#define H_PRIORITYQUEUE

namespace farmingdale {
	class priorityQueue;
	enum status { SUCCESS, FAILURE };
	static const int MAX_QUEUE_SIZE = 10;
}

class farmingdale::priorityQueue {
private:
	// when doing an array version, you are safe making the array : int data[MAX_QUEUE_SIZE];
	int data[MAX_QUEUE_SIZE];
	int count = 0;
	int inserts = 0; // count of number of calls to inserts
	int findMins = 0; // count of number of calls to findMin
	int deletions = 0; // count of number of calls to deletion
	int moves = 0; // count of number of items moved (for inserts)
	int holdMyMinIndex = 0; //Used to hold minimum index - If we want to make removeMin() O(1)
	int holdMyMinVal = 2147483647; //Used to hold minimum index 
public:
	void printStats();
	void heapSort();
	void checkChildren(int); 
	void insertHeap(int); 
	status insert(int insertMePlease);
	status findMin(int &putTheMinHere);
	status removeMin();
};
#endif