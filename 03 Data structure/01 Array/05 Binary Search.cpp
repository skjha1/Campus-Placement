#include<iostream>
using namespace std;

struct Array
{
	int* A;
	int length;
	int size;
};

void Display(struct Array arr)
{
	int i;
	cout << "The elements of the Array is " << endl;
	for (i = 0; i < arr.length; i++)
		cout << arr.A[i] << " ";
}

int BinarySearch(struct Array* arr, int key)
{
	int mid;
	int l = 0;
	int h = arr->length;

	while (l < h)
	{
		mid = (l + h) / 2;
		if (key == arr->A[mid])
			return mid+1;
		else if (key < arr->A[mid])
			h = mid - 1;
		else
			l = mid + 1;
	}
	return -1;
}

int RBinarySearch(struct Array* arr, int low, int high, int key) // Recursive approach for Bimary search 
{
	int mid=0;
	
	if (low < high)
	{
		mid = (low + high) / 2;
		if (key == arr->A[mid])
			return mid;
		else if (key < arr->A[mid])
			return RBinarySearch(arr, low, mid - 1, key);			
	}
	else
		return RBinarySearch(arr, mid+1, high, key);

}

int main()
{
	struct Array arr;
	int no;
	cout << "Enter the size of the Array !" << endl;
	cin >> arr.size;
	arr.A = new int[arr.size];
	cout << "Enter the length of the Array !" << endl;
	cin >> no;
	arr.length = 0;
	cout << "Enter the elements of the Array !" << endl;
	for (int i = 0; i < no; i++)
		cin >> arr.A[i];
	arr.length = no;

	cout << "The key element is at the position  " << RBinarySearch(&arr, 0,arr.length,5); // this will give the position of the element which we are searching 

	return 0;
}