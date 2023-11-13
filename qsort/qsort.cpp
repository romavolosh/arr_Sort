#include <iostream>

using namespace std;

int main() {



	cout << "Max arr size = 100!"<< endl;
	int size = 100;
	cin >> size;

	while (size > 100)
	{
		cout << "Size > 100!" << endl;
		cin >> size;
	}

	int temp = 0;
	int arr[100];




	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}





	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++) {

			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

			}
		}
	}


	for (int k = 0; k < size; k++)
	{
		cout << arr[k] << " ";
	}


}