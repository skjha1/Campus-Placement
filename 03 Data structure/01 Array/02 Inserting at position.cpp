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

void Insert(struct Array* arr, int index , int val)
{
	int i;
	for (i = arr->length; i > index; i--)
	{
		arr->A[i] = arr->A[i - 1];
	}
	arr->A[index] = val;
	arr->length++;
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

	Insert(&arr, 4, 78); // this will inset element at the particular position 
	Display(arr);

	return 0;

}