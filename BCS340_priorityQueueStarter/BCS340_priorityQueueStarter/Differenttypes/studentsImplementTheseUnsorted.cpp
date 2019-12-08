//#include "priorityQueue.h"
//#include <iostream>
//using namespace farmingdale;
//// Please make 4 copies of this project with different names. 
//// Implement each algorithm in one copy.
//
////Unsorted Array
//
//status priorityQueue::insert(int insertMe) {
//	//Insert new number into end of array
//	data[inserts] = insertMe;
//
//	// This method should try to insert "insertMe" into the 
//	// priorityQueue, then return SUCCESS. If it cannot, 
//	// it should return FAILURE
//	if (data[inserts] == insertMe) {
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
//	if (data[0] != NULL) {
//		//Smallest number as first element
//		putTheMinHere = data[0];
//
//		for (int i = 0; i < inserts; i++) {
//			if (data[i] < putTheMinHere) {
//				putTheMinHere = data[i];
//			}
//		}
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
