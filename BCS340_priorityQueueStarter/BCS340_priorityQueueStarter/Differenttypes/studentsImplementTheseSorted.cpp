//#include "priorityQueue.h"
//#include <iostream>
//using namespace farmingdale;
//// Please make 4 copies of this project with different names. 
//// Implement each algorithm in one copy.
//
////Sorted MAX Array
//
//status priorityQueue::insert(int insertMe) {
//
//	//Check if it's first insert
//	if (inserts == 0) {
//		//Insert new number array
//		data[inserts] = insertMe;
//		if (data[inserts] == insertMe) {
//			++inserts;
//			return SUCCESS;
//		}
//		else {
//			return FAILURE;
//		}
//	}
//	else { //Not first insert
//		int replacedNum; //Number we overwrote
//		int replacedIndex; //Index we overwrote, start 1 index ahead
//		//Max-Min
//		//Compare current element to insertMe, if current element is smaller, get the number and index, set that index to insertMe. 
//		for (int i = 0; i < inserts+1; i++) {
//			if (insertMe > data[i]) {
//				replacedNum = data[i];
//				replacedIndex = i;
//				data[i] = insertMe;
//				break;
//			}
//		}
//		//Start from end of array, move all elements back one until replacedIndex+1
//		for (int i = inserts; i > replacedIndex; i--) {
//			if (i == replacedIndex+1) { //If at replacementIndex, set to overwritten number
//				data[i] = replacedNum;
//			}else {
//				data[i] = data[i-1];
//			}
//		}
//
//		// This method should try to insert "insertMe" into the 
//		// priorityQueue, then return SUCCESS. If it cannot, 
//		// it should return FAILURE
//		if (data[replacedIndex+1] == replacedNum) {
//			++inserts;
//			return SUCCESS;
//		}
//		else {
//			return FAILURE;
//		}
//	}
//	//Parent of child of a heap
//	//	index-1/2
//	//	8 - 1 = 7 / 2 = 3
//	//	4 - 1 = 3 / 2 = 1
//
//	//	9 - 1 = 8 /2 = 4
//
//}
//
//status priorityQueue::findMin(int &putTheMinHere) {
//
//	// This method should put the minimum value in "putTheMinHere" and
//	// return SUCCESS. If it cannot (i.e., if the queue is empty),
//	// return FAILURE
//	if (data[0] != NULL) {
//		//Smallest number as first element
//		putTheMinHere = data[inserts-deletions-1];
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
//	int minNumIndex = inserts-deletions-1;
//
//	data[minNumIndex] = INT_MAX;
//
//	if (data[minNumIndex] == INT_MAX) {
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
