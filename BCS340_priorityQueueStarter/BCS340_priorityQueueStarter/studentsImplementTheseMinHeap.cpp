#include "priorityQueue.h"
#include <iostream>
using namespace farmingdale;
// Please make 4 copies of this project with different names. 
// Implement each algorithm in one copy.

//Min Heap

status priorityQueue::insert(int insertMe) {

	//Check if it's first insert
	data[inserts] = insertMe;
	insertHeap(inserts);

	// This method should try to insert "insertMe" into the 
	// priorityQueue, then return SUCCESS. If it cannot, 
	// it should return FAILURE
	if (data[0] <= insertMe) {
		++inserts;
		return SUCCESS;
	}
	else {
		return FAILURE;
	}
	//Parent of child of a heap
	//	index-1/2
	//	8 - 1 = 7 / 2 = 3
	//	4 - 1 = 3 / 2 = 1
	//	9 - 1 = 8 /2 = 4

}

status priorityQueue::findMin(int &putTheMinHere) {

	// This method should put the minimum value in "putTheMinHere" and
	// return SUCCESS. If it cannot (i.e., if the queue is empty),
	// return FAILURE
	if (data[0] != INT_MIN) {
		//Smallest number as root
		putTheMinHere = data[0];
		++findMins;
		return SUCCESS;
	}
	else {
		return FAILURE;

	}
}

status priorityQueue::removeMin() {
	++deletions;
	int lastChildIndex = inserts - deletions; //Last child index
	int lastChildValue = data[lastChildIndex]; //Last child value
	int root = 0; //Root of heap

	data[root] = lastChildValue; //Replace root with last child
	data[lastChildIndex] = INT_MAX; //Remove last child

	//Need to reheap
	heapSort();

	if (data[lastChildIndex] == INT_MAX) {
		return SUCCESS;
	}
	else {
		return FAILURE;
	}

	// this should simply remove the min item 
	// and return SUCCESS. If it cannot (i.e., if the queue is empty),
	// return FAILURE
}

//assisted with http://www.algolist.net/Data_structures/Binary_heap/Insertion
void priorityQueue::insertHeap(int nodeIndex) {
	int parentIndex, temp;

	if (nodeIndex != 0) {//Not root
		int getParentIndex = (nodeIndex - 1) / 2;
		parentIndex = getParentIndex;
		if (data[parentIndex] > data[nodeIndex]) { //If parent is bigger than child swap
			temp = data[parentIndex];
			data[parentIndex] = data[nodeIndex];
			data[nodeIndex] = temp;
			insertHeap(parentIndex);
		}
	}
}


//assisted with http://www.algolist.net/Data_structures/Binary_heap/Insertion
//Restructure array into min heap
void priorityQueue::heapSort() {
	//Compare parent and see which child is smallest
	//Swap parent with child

	for (int i = (inserts-deletions) / 2 - 1; i >= 0; i--) {
		checkChildren(i);
	}

	for (int i = (inserts - deletions); i >= 0; i--) {
		//Move current root to end
		if (i != 0) {
			std::swap(data[0], data[i - 1]);
		}
		checkChildren(i);
	}

}

//Get the smaller of two children
void priorityQueue::checkChildren(int value) {
	int smallestIndex = value;	//Get root
	int leftIndex = (2 * value) + 1;	//Get left child index
	int rightIndex = (2 * value) + 2;	//Get right child index

	//If left child is bigger than largest
	if (leftIndex < (inserts - deletions) && data[leftIndex] < data[smallestIndex] && data[leftIndex] != INT_MAX) {
		smallestIndex = leftIndex;
	}

	//If right child is bigger than largest
	if (rightIndex < (inserts - deletions) && data[rightIndex] < data[smallestIndex] && data[rightIndex] != INT_MAX){
		smallestIndex = rightIndex;
	}

	//If largest is not the root
	if (smallestIndex != value) {
		std::swap(data[smallestIndex], data[value]);
		checkChildren(smallestIndex);
	}
}

