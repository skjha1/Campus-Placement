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

	Display(arr);

	return 0;

}