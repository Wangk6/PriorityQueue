//#include "priorityQueue.h"
//#include <iostream>
//#include <list>
//#include <algorithm>  
//using namespace farmingdale;
//// Please make 4 copies of this project with different names. 
//// Implement each algorithm in one copy.
//
////Unsorted Hold Min Array
//std::list<int> myMinQueue;
//
//status priorityQueue::insert(int insertMe) {
//	//Insert new number into end of array
//	data[inserts] = insertMe;
//	
//
//	// This method should try to insert "insertMe" into the 
//	// priorityQueue, then return SUCCESS. If it cannot, 
//	// it should return FAILURE
//	if (data[inserts] == insertMe) {
//		//Insert into vector and sort
//		myMinQueue.push_back(insertMe);
//		myMinQueue.sort();
//		++inserts;
//		return SUCCESS;
//	}
//	else {
//		return FAILURE;
//	}
//}
//
//status priorityQueue::findMin(int &putTheMinHere) {
//
//	// This method should put the minimum value in "putTheMinHere" and
//	// return SUCCESS. If it cannot (i.e., if the queue is empty),
//	// return FAILURE
//	if (!myMinQueue.empty()) {
//		//Smallest number as first element
//		putTheMinHere = myMinQueue.front();
//		++findMins;
//		return SUCCESS;
//	}
//	else {
//		return FAILURE;
//
//	}	
//}
//
//status priorityQueue::removeMin() {
//	int minNum;
//	int minNumIndex = -1;
//	findMin(minNum);
//	myMinQueue.pop_front();
//
//	//Get index of smallest number
//	for (int i = 0; i < inserts; i++) {
//		if (data[i] == minNum) {
//			minNumIndex = i;
//			data[i] = INT_MAX;
//			break;
//		}
//	}
//
//	if (minNumIndex != -1) {
//		++deletions;
//		return SUCCESS;
//	}
//	else {
//		return FAILURE;
//	}
//
//	// this should simply remove the min item 
//	// and return SUCCESS. If it cannot (i.e., if the queue is empty),
//	// return FAILURE
//}
