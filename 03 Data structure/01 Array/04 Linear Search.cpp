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

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int LinearSearch(struct Array* arr, int key)
{
	int i;
	for (i = 0; i < arr->length; i++)
	{
		if (key == arr->A[i])
			return i+1;
	}
	return -1;
}

int LinearSearch1(struct Array* arr, int key)
{
	int i;
	for (i = 0; i < arr->length; i++)
	{
		if (key == arr->A[i]) {
			swap(&arr->A[i], &arr->A[0]);
			return i+1;
		}
	}
	return -1;
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

	cout << "The key element is at the position  " << LinearSearch1(&arr, 5); // this will give the position of the element which we are searching 

	return 0;

}