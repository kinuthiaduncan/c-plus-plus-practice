#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime> 
#include "header.h"
 using namespace std;

 MergeSort::MergeSort(int vectorSize) // constructor for random nubers into vector
 {
	 size = (vectorSize > 0 ? vectorSize : 10); // vectorSize
	 srand(time(0));							// random numbers 10 to 99
		 for (int i = 0; i < size; ++i)			
		 data.push_back(10 + rand() % 90);
	 } 

	// split vector, sort subvectors and merge subvectors into sorted vector
 void MergeSort::sort()
 {
	 sortSubVector(0, size - 1);
 }
 void MergeSort::sortSubVector(int low, int high)
 {
	 if ((high - low) >= 1)
	 {
		 int middle1 = (low + high) / 2; // find middle of vector
		 int middle2 = middle1 + 1;
		 cout << "split: ";
		 displaySubVector(low, high);
		 cout << endl << "        ";
		 displaySubVector(low, middle1);
		 cout << endl << "        ";
		 displaySubVector(middle2, high);
		 cout << endl << endl;
		 // split vector in half; sort each half (recursive calls)
		 sortSubVector(low, middle1); // first half of vector
		 sortSubVector(middle2, high); // second half of vector
		 // merge two sorted vectors after split calls return
		 merge(low, middle1, middle2, high);
	 } 
	 
 }

 // merge two sorted subvectors into one sorted subvector
 void MergeSort::merge(int left, int middle1, int middle2, int right)
 {
	 int leftIndex = left; // index for left subvector
 int rightIndex = middle2; // index for right subvector
 int combinedIndex = left; // index for temporary working vector
 vector< int > combined(size); // working vector
 // output two original subvectors before they are merged
 cout << "merge: ";
 displaySubVector(left, middle1);
 cout << endl << " ";
 displaySubVector(middle2, right);
 cout << endl;
 // merge vectors until reaching end of either
 while (leftIndex <= middle1 && rightIndex <= right)
 {
	 // place smaller of two current elements into result and move to next space in vector
	 if (data[leftIndex] <= data[rightIndex])
		 combined[combinedIndex++] = data[leftIndex++];
	 else
		 combined[combinedIndex++] = data[rightIndex++];
 } 
 if (leftIndex == middle2) // if at end of left vector
 {
	 while (rightIndex <= right) // copy in rest of right vector
		 combined[combinedIndex++] = data[rightIndex++];
 }
 else 
 {
	 while (leftIndex <= middle1) // copy in rest of left vector
		 combined[combinedIndex++] = data[leftIndex++];
 } 
 // copy values back into original vector
 for (int i = left; i <= right; ++i)
	 data[i] = combined[i];

 // output merged vector
 cout << " ";
 displaySubVector(left, right);
 cout << endl << endl;
 }


 // display elements in vector
  void MergeSort::displayElements() const
	  {
	 displaySubVector(0, size - 1);
	  } 

	  // display certain values in vector
	 void MergeSort::displaySubVector(int low, int high) const
	 {
	  // output spaces for alignment
		  for (int i = 0; i < low; ++i)
		 cout << " ";
	 
		 // output elements left in vector
		  for (int i = low; i <= high; ++i)
		  cout << " " << data[i];
	  } 

	 int main()
	 {
		 // create object to perform merge sort
		 MergeSort sortVector(10);

		 cout << "Unsorted vector:" << endl;
		 sortVector.displayElements(); // print unsorted vector
		 cout << endl << endl;

		 sortVector.sort(); // sort vector

		 cout << "Sorted vector:" << endl;
		 sortVector.displayElements(); // print sorted vector
		 cout << endl;
		 system("pause");
	 }